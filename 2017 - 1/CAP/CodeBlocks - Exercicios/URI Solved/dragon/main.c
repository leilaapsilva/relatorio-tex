/*
   The MIT License (MIT)

 Copyright (c) 2016 Franco Eusébio Garcia

 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__linux__)
    // pacman -S sdl2 sdl2_image sdl2_mixer sdl2_net sdl2_ttf sdl2_gfx
    // gcc main.c -L/usr/local/lib -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -Wall -o bin/game
    #include <SDL2/SDL.h>
    #include <SDL2/SDL_image.h>
    #include <SDL2/SDL_mixer.h>
    #include <SDL2/SDL_ttf.h>
#elif defined(_WIN32)
   // #include "SDL2/SDL.h"
 //   #include "SDL2/SDL_image.h"
   // #include "SDL2/SDL_mixer.h"
   // #include "SDL2/SDL_ttf.h"
#else
    #error Not supported!
#endif

////////////////////////////////////////////////////////////////////////////////
// Types                                                                      //
////////////////////////////////////////////////////////////////////////////////

typedef int8_t Int8;
typedef uint8_t UInt8;
typedef int32_t Int32;
typedef uint32_t UInt32;
typedef int64_t Int64;
typedef uint64_t UInt64;

typedef UInt32 Bool; // 1 : true, 0 : false
typedef UInt32 Bool32; // > 0 : true, 0 : false

typedef float Real32;
typedef double Real64;

const Bool true = 1;
const Bool false = 0;

typedef char String[512];

struct Window
{
    String title;
//    Uint32 width;
//    Uint32 height;
   // SDL_Window* pSDLWindow;
    //SDL_Renderer* pRenderer;
};

////////////////////////////////////////////////////////////////////////////////
// Function prototypes                                                        //
////////////////////////////////////////////////////////////////////////////////

void print_sdl_error(const String pMessage);

//SDL_Texture* load_bitmap(const String pTexturePath,
//                         SDL_Renderer* const pRenderer);
//SDL_Texture* load_texture(const String pTexturePath,
//                          SDL_Renderer* const pRenderer);
void destroy_texture(SDL_Texture* pTexture);
void render_texture_at(SDL_Texture* const pTexture,
                       SDL_Renderer* const pRenderer,
                       Int32 x,
                       Int32 y,
                       Int32 width,
                       Int32 height,
                       const SDL_Rect* const pClippingRect);
void render_texture(SDL_Texture* const pTexture,
                    SDL_Renderer* const pRenderer,
                    Int32 x,
                    Int32 y);

TTF_Font* load_font(const String pFontPath,
                    Uint32 fontSize);
void destroy_font(TTF_Font* pFont);
void render_text(const String pText,
                 TTF_Font* const pFont,
                 const SDL_Color color,
                 SDL_Renderer* const pRenderer,
                 Int32 x,
                 Int32 y);
void render_text_wrapped(const String pText,
                         TTF_Font* const pFont,
                         const SDL_Color color,
                         Uint32 wrapWidth,
                         SDL_Renderer* const pRenderer,
                         Int32 x,
                         Int32 y);

Mix_Chunk* load_sound_effect(const String pSoundEffectPath);
Bool play_sound_effect(Mix_Chunk* pSoundEffect);
void destroy_sound_effect(Mix_Chunk* pSoundEffect);

Mix_Music* load_music(const String pMusicPath);
Bool play_music(Mix_Music* pMusic);
Bool is_music_playing();
void destroy_music(Mix_Music* pMusic);

Bool initialize_sdl();
void destroy_sdl();
Bool create_window(struct Window* pWindow,
                   const String title,
                   Uint32 width,
                   Uint32 height);
void destroy_window(struct Window* pWindow);

////////////////////////////////////////////////////////////////////////////////
// Show time!                                                                 //
////////////////////////////////////////////////////////////////////////////////

int main(int argc,
         char* argv[])
{
    // SDL initialization.
    // Here we initialize the application's audio, image, and font processing.
    // Do not remove.
    if (!initialize_sdl())
    {
        return EXIT_FAILURE;
    }

    // Next, we create the application's window.
    // You may change the title, and the window's width and height.
    struct Window window;
    if (!create_window(&window,
                       "Window Title",
                       1280u / 2u,
                       720u / 2u))
    {
        return EXIT_FAILURE;
    }

    ////////////////////////////////////////////////////////////////////////////
    // Variable declarations                                                  //
    ////////////////////////////////////////////////////////////////////////////

    // Images.

    // Window starts at top-left corner (0, 0) and ends at bottom right
    // corner (width - 1, height -1).

    // File paths should be relative to the working directory (usually the
    // executable file, unless changed otherwise).
    // In this project, the relative path assumes the project's root (the
    // directory containing "main.c") as the working directory.
    SDL_Texture* pTexture = NULL;
    Uint32 textureX = 0;
    Uint32 textureY = 0;
    pTexture = load_texture("assets/graphics/puppy0_resized.jpg",
                            window.pRenderer);

    // Fonts and text.

    TTF_Font* pFont = NULL;
    pFont = load_font("assets/fonts/DejaVuSans.ttf", 30);

    // Data must be converted to string to be written.
    // sprintf() is similar to printf(), albeit outputting the result to a
    // string.
    // Here, string is a typedef to char[256].
    // Colors are stored as RGBA (Red, Blue, Green, Alpha) values, ranging from
    // 0 (lack of) to 255 (maximum).
    // Alpha is the transparency/opacity of the texture. 0 means full
    // transparency (which renders the image invisible),
    //  255 means full opacity (no transparency at all).
    String mousePositionCoordinate;
    SDL_Color mousePositionCoordinateColor;
    // White color.
    mousePositionCoordinateColor.r = 255;
    mousePositionCoordinateColor.g = 255;
    mousePositionCoordinateColor.b = 255;
    mousePositionCoordinateColor.a = 255;
    Int32 mouseX;
    Int32 mouseY;
    SDL_GetMouseState(&mouseX, &mouseY);
    sprintf(mousePositionCoordinate, "(%d, %d)", mouseX, mouseY);

    // Sounds.

    // Chunk is loaded at once to the memory.
    // Chunks are usually used as short sound effects.
    // WAV files shoud be encoded as: RIFF (little-endian) data, WAVE audio,
    // Microsoft PCM, 16 bit, stereo.
    Mix_Chunk* pSoundEffect = NULL;
    pSoundEffect = load_sound_effect("assets/sounds/Dog Bark 1 16bit.wav");

    // Music is streamed (loaded in demand according to playback progress).
    // OGG is a good royalty-free format audio: it is free to use/distribute, and
    // has good compression rates and sound quality.
    Mix_Music* pMusic = NULL;
    pMusic = load_music("assets/sounds/Carefree.ogg");

    // Start playing music at once!
    play_music(pMusic);

    ////////////////////////////////////////////////////////////////////////////
    // Main loop                                                              //
    ////////////////////////////////////////////////////////////////////////////

    Bool bRunning = true;
    while (bRunning)
    {
        ////////////////////////////////////////////////////////////////////////
        // Input                                                              //
        ////////////////////////////////////////////////////////////////////////

        // Some examples of input:
        // When ESC is pressed, we finish the loop, and prepare to quit the game.
        // When the mouse's left button is released, we play a sound effect.

        // For events and values, check: https://wiki.libsdl.org/SDL_Event
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
            {
                // We pressed the 'X' button on the window, requesting to close
                // it. We are polite and obey... For now.
                bRunning = false;

                break;
            }

            // Key was released.
            case SDL_KEYUP:
            {
                // Check case values at: https://wiki.libsdl.org/SDL_Keycode
                switch (event.key.keysym.sym)
                {
                default:
                {
                    break;
                }
                }

                break;
            }

            // Key is being pressed.
            case SDL_KEYDOWN:
            {
                // Check case values at: https://wiki.libsdl.org/SDL_Keycode
                switch (event.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                {
                    // We pressed ESC.
                    bRunning = false;

                    break;
                }

                default:
                {
                    break;
                }
                }

                break;
            }

            // Button was released.
            case SDL_MOUSEBUTTONUP:
            {
                // Check values at: https://wiki.libsdl.org/SDL_MouseButtonEvent
                switch (event.button.button)
                {
                case SDL_BUTTON_LEFT:
                {
                    // We released the mouse button.
                    play_sound_effect(pSoundEffect);

                    break;
                }

                default:
                {
                    break;
                }
                }

                break;
            }

            // Button was pressed.
            case SDL_MOUSEBUTTONDOWN:
            {
                break;
            }

            // We do not care about anything else at this time.
            default:
            {
                break;
            }
            }
        }

        ////////////////////////////////////////////////////////////////////////
        // Logic                                                              //
        ////////////////////////////////////////////////////////////////////////

        // We fetch the mouse's cursor position.
        // We will draw it later (see Output) with this value.
        SDL_GetMouseState(&mouseX, &mouseY);
        sprintf(mousePositionCoordinate, "(%d, %d)", mouseX, mouseY);

        // Next, we change the text color. Why? Because we can, of course.
        // We cycle among the possible RGB colors.
        mousePositionCoordinateColor.r++;
        if (mousePositionCoordinateColor.r == 255)
        {
            mousePositionCoordinateColor.r = 0;

            mousePositionCoordinateColor.g++;
            if (mousePositionCoordinateColor.g == 255)

            {
                mousePositionCoordinateColor.g = 0;

                mousePositionCoordinateColor.b++;
                if (mousePositionCoordinateColor.b == 255)
                {
                    // Or we do not cycle among them all.
                    // Here we should reset only blue, but let us reset to black
                    // to speed-up the color change.
                    mousePositionCoordinateColor.r = 0;
                    mousePositionCoordinateColor.g = 0;
                    mousePositionCoordinateColor.b = 0;
                }
            }
        }

        ////////////////////////////////////////////////////////////////////////
        // Output                                                             //
        ////////////////////////////////////////////////////////////////////////

        // We paint the window black, removing whatever had been drawn before.
        // It is like clearing a canvas to start anew!
        // Do not remove.
        SDL_RenderClear(window.pRenderer);

        // Our drawing code starts here.

        // On each rendering call, we drawn the new image above the previous
        // ones.

        render_texture(pTexture,
                       window.pRenderer,
                       textureX,
                       textureY);

        render_text(mousePositionCoordinate,
                    pFont,
                    mousePositionCoordinateColor,
                    window.pRenderer,
                    mouseX,
                    mouseY);

        // Our drawing code ends here.

        // Update the window with this frame's content.
        // Do not remove.
        SDL_RenderPresent(window.pRenderer);

        // Wait a little bit to reduce CPU usage.
        SDL_Delay(10u); // Milliseconds.
    }

    ////////////////////////////////////////////////////////////////////////////
    // Variable clean-up                                                      //
    ////////////////////////////////////////////////////////////////////////////

    // It is a good practice to destroy variables using the inverse order of
    // which they were allocated.
    destroy_music(pMusic);
    pMusic = NULL;

    destroy_sound_effect(pSoundEffect);
    pSoundEffect = NULL;

    destroy_font(pFont);
    pFont = NULL;

    destroy_texture(pTexture);
    pTexture = NULL;

    // De-initialize SDL.
    // Do not remove.
    destroy_window(&window);
    destroy_sdl();

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
// Function implementation                                                    //
////////////////////////////////////////////////////////////////////////////////

/*
       Here be dragons.
           /        Beware!
   (\)(\) /  (\)_(/) /
   (^.^)     (='.'=)
  o(")(")    (")_(")

                            / \  //\
     ROAR!    |\___/|      /   \//  \\
        \     /0  0  \__  /    //  | \ \
         \   /     /  \/_/    //   |  \  \
          \  @_^_@'/   \/_   //    |   \   \
             //_^_/     \/_ //     |    \    \
          ( //) |        \///      |     \     \
        ( / /) _|_ /   )  //       |      \     _\
      ( // /) '/,_ _ _/  ( ; -.    |    _ _\.-~        .-~~~^-.
    (( / / )) ,-{        _      `-.|.-~-.           .~         `.
   (( // / ))  '/\      /                 ~-. _ .-~      .-~^-.  \
   (( /// ))      `.   {            }                   /      \  \
    (( / ))     .----~-.\        \-'                 .~         \  `. \^-.
               ///.----..>        \             _ -~             `.  ^-`  ^-_
                 ///-._ _ _ _ _ _ _}^ - - - - ~                     ~-- ,.-~
                                                                    /.-~
*/

void print_sdl_error(const String pMessage)
{
    fprintf(stderr, "%s\n%s\n", pMessage, SDL_GetError());
}

SDL_Texture* load_bitmap(const String pTexturePath,
                         SDL_Renderer* const pRenderer)
{
    SDL_Surface* pSurface = SDL_LoadBMP(pTexturePath);
    if (pSurface == NULL)
    {
        print_sdl_error("Failed to create the surface.");

        return NULL;
    }

    SDL_Texture* pTexture = SDL_CreateTextureFromSurface(pRenderer,
                                                         pSurface);
    SDL_FreeSurface(pSurface);
    if (pTexture == NULL)
    {
        print_sdl_error("Failed to create a texture from the surface.");

        return NULL;
    }

    return pTexture;
}

SDL_Texture* load_texture(const String pTexturePath,
                          SDL_Renderer* const pRenderer)
{
    SDL_Texture* pTexture = IMG_LoadTexture(pRenderer,
                                            pTexturePath);
    if (pTexture == NULL)
    {
        print_sdl_error("Failed to create a texture from the surface.");

        return NULL;
    }

    return pTexture;
}

void destroy_texture(SDL_Texture* pTexture)
{
    SDL_DestroyTexture(pTexture);
}

void render_texture_at(SDL_Texture* const pTexture,
                       SDL_Renderer* const pRenderer,
                       Int32 x,
                       Int32 y,
                       Int32 width,
                       Int32 height,
                       const SDL_Rect* const pClippingRect)
{
    SDL_Rect destination;
    destination.x = x;
    destination.y = y;
    destination.w = width;
    destination.h = height;

    SDL_RenderCopy(pRenderer, pTexture, pClippingRect, &destination);
}

void render_texture(SDL_Texture* const pTexture,
                    SDL_Renderer* const pRenderer,
                    Int32 x,
                    Int32 y)
{
    Int32 width;
    Int32 height;
    SDL_QueryTexture(pTexture,
                     NULL,
                     NULL,
                     &width,
                     &height);

    render_texture_at(pTexture,
                      pRenderer,
                      x, y,
                      width, height,
                      NULL);
}

TTF_Font* load_font(const String pFontPath,
                    Uint32 fontSize)
{
    TTF_Font* pFont = TTF_OpenFont(pFontPath, fontSize);
    if (pFont == NULL)
    {
        print_sdl_error("Failed to load the font.");

        return NULL;
    }

    return pFont;
}

void destroy_font(TTF_Font* pFont)
{
    TTF_CloseFont(pFont);
}

void render_text(const String pText,
                 TTF_Font* const pFont,
                 const SDL_Color color,
                 SDL_Renderer* const pRenderer,
                 Int32 x,
                 Int32 y)
{
    SDL_Surface* pSurface = TTF_RenderUTF8_Blended(pFont,
                                                   pText,
                                                   color);
    if (pSurface == NULL)
    {
        print_sdl_error("Failed to create the text surface.");

        return;
    }

    SDL_Texture* pTexture = SDL_CreateTextureFromSurface(pRenderer,
                                                         pSurface);
    if (pTexture == NULL)
    {
        print_sdl_error("Failed to create the text texture.");

        return;
    }

    SDL_FreeSurface(pSurface);

    render_texture(pTexture,
                   pRenderer,
                   x,
                   y);
    destroy_texture(pTexture);
}

void render_text_wrapped(const String pText,
                         TTF_Font* const pFont,
                         const SDL_Color color,
                         Uint32 wrapWidth,
                         SDL_Renderer* const pRenderer,
                         Int32 x,
                         Int32 y)
{
    SDL_Surface* pSurface = TTF_RenderUTF8_Blended_Wrapped(pFont,
                                                           pText,
                                                           color,
                                                           wrapWidth);
    if (pSurface == NULL)
    {
        print_sdl_error("Failed to create the text surface.");

        return;
    }

    SDL_Texture* pTexture = SDL_CreateTextureFromSurface(pRenderer,
                                                         pSurface);
    if (pTexture == NULL)
    {
        print_sdl_error("Failed to create the text texture.");

        return;
    }

    SDL_FreeSurface(pSurface);

    render_texture(pTexture,
                   pRenderer,
                   x,
                   y);
    destroy_texture(pTexture);
}

Mix_Chunk* load_sound_effect(const String pSoundEffectPath)
{
    Mix_Chunk* pSoundEffect = Mix_LoadWAV(pSoundEffectPath);
    if (pSoundEffect == NULL)
    {
        print_sdl_error("Failed to load the sound effect.");

        return NULL;
    }

    return pSoundEffect;
}

Bool play_sound_effect(Mix_Chunk* pSoundEffect)
{
    return (Mix_PlayChannel(-1, pSoundEffect, 0) != -1);
}

void destroy_sound_effect(Mix_Chunk* pSoundEffect)
{
    Mix_FreeChunk(pSoundEffect);
}

Mix_Music* load_music(const String pMusicPath)
{
    Mix_Music* pMusic = Mix_LoadMUS(pMusicPath);
    if (pMusic == NULL)
    {
        print_sdl_error("Failed to load the music.");

        return NULL;
    }

    return pMusic;
}

Bool play_music(Mix_Music* pMusic)
{
    return (Mix_PlayMusic(pMusic, -1) != -1);
}

Bool is_music_playing()
{
    return (Mix_PlayingMusic());
}

void destroy_music(Mix_Music* pMusic)
{
    Mix_FreeMusic(pMusic);
}

Bool initialize_sdl()
{
    //if (SDL_Init(SDL_INIT_VIDEO) != 0)
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        print_sdl_error("Failed to initialize SDL.");

        return false;
    }

    // https://www.libsdl.org/projects/SDL_image/docs/SDL_image_8.html
    if (IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF) !=
        (IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF))
    {
        print_sdl_error("Failed to initialize SDL IMG.");

        SDL_Quit();

        return false;
    }

    if (TTF_Init() != 0)
    {
        print_sdl_error("Failed to initialize SDL TTF.");

        IMG_Quit();
        SDL_Quit();

        return false;
    }

    // https://www.libsdl.org/projects/SDL_mixer/docs/SDL_mixer.html
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 4096) == -1)
    {
        print_sdl_error("Failed to initialize SDL TTF.");

        TTF_Quit();
        IMG_Quit();
        SDL_Quit();

        return false;
    }

    return true;
}

void destroy_sdl()
{
    Mix_CloseAudio();
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}

Bool create_window(struct Window* pWindow,
                   const String title,
                   Uint32 width,
                   Uint32 height)
{
    strcpy(pWindow->title, title);
    pWindow->width = width;
    pWindow->height = height;
    // https://wiki.libsdl.org/SDL_CreateWindow
    // https://wiki.libsdl.org/SDL_WindowFlags
    pWindow->pSDLWindow = SDL_CreateWindow(pWindow->title,
                                           SDL_WINDOWPOS_CENTERED,
                                           SDL_WINDOWPOS_CENTERED,
                                           pWindow->width,
                                           pWindow->height,
                                           SDL_WINDOW_SHOWN);
    if (pWindow->pSDLWindow == NULL)
    {
        print_sdl_error("Failed to create the window.");

        destroy_sdl();

        return false;
    }

    // https://wiki.libsdl.org/SDL_CreateRenderer
    // https://wiki.libsdl.org/SDL_RendererFlags
    pWindow->pRenderer = SDL_CreateRenderer(
        pWindow->pSDLWindow,
        -1, // Initialize with the first suitable renderer.
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (pWindow->pRenderer == NULL)
    {
        print_sdl_error("Failed to create the renderer.");

        SDL_DestroyWindow(pWindow->pSDLWindow);

        destroy_sdl();

        return false;
    }

    return true;
}

void destroy_window(struct Window* pWindow)
{
    SDL_DestroyRenderer(pWindow->pRenderer);
    SDL_DestroyWindow(pWindow->pSDLWindow);
}

/* Emacs Configuration        */
/* Local Variables:           */
/* mode:              c       */
/* comment-column:    80      */
/* c-basic-offset:    4       */
/* c-file-style:      "bsd"   */
/* End:                       */
