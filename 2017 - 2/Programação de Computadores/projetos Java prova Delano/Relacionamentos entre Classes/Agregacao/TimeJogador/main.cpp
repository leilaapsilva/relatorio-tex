#include <cstdlib>
#include "Jogador.h"
#include "Time.h"

using namespace std;

int main(int argc, char** argv) {
    
    Jogador *prass = new Jogador("Fernando Prass", 39, "Goleiro");
    Jogador *guerra = new Jogador("Alejando Guerra", 32, "Meia");
    Jogador *borja = new Jogador("Miguel Borja", 24, "Atacante");
    
    Time *time = new Time("Palmeiras");
    
    time->adicionaJogador(prass);
    time->adicionaJogador(guerra);
    time->adicionaJogador(borja);
    
    time->imprimeElenco();
    
    delete time;
    
    delete borja;
    delete guerra;
    delete prass;
    
    return 0;
}

