#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int  i; char  string[51];
    while(gets(string) !=  NULL){
          //  fflush(stdin);

        for(i=0; i<strlen(string);i++){
            if( string[i] >= 'a' && string[i] <= 'm')
                string[i]  += 13;
            else if(string[i] > 'm' && string[i] <= 'z')
                string[i] -= 13;

        else if( string[i] >= 'A' && string[i] <= 'M')
                string[i]  += 13;
            else if(string[i] > 'M' && string[i] <= 'Z')
                string[i] -= 13;

        }


        printf("%s\n", string);

        /*  a   1    n
            b   2    o
            c   3    p
            d   4    q
            e   5    r
            f   6    s
            g   7    t
            h   8    u
            i   9    v
            j   10   w
            k   11   x
            l   12   y
            m   13   z
            n   14   a
            o   15  b
            p   16  c
            q   17  d
            r   18  e
            s   19  f
            t   20  g
            u   21  h
            v   22  i
            w   23  j
            x   24  k
            y   25  l
            z   26  m */
    }

             return 0;
    }
