#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    //ofstream: sai do pc e entra no arquivo_write ( escrita)
    //ifstream: sai do arquivo_write e entra no programa ( leitura)
    //fstream: both

    ofstream arquivo_write;
    arquivo_write.open("arquivo_writeteste.txt",ios::app);
    arquivo_write <<  "Texto" << endl;
    arquivo_write << "cfbcursos;";

    //cout << arquivo_write << endl;
    arquivo_write.close();



    ifstream arquivo_read;
    string linha;
    arquivo_read.open("socorroRead.txt");
    if(arquivo_read.is_open())
    {
        while(getline(arquivo_read,linha)){
            cout << linha << endl;
        }

    } else {cout << "Não foi possível abrir o arquivo :/" << endl; }

    arquivo_read.close();

    fstream genericFile;
    genericFile.open("socorroRead.txt",ios::out | ios::app);



    char opc = 's'; string nome;
    while(opc == 's' || opc == 'S'){
        cout << "Digite um Nome: " << endl;
        cin >> nome;
        genericFile << nome << endl;
        cout << "Digitar um novo nome? S ou N" << endl;
        cin >> opc;
        system("CLS");




    }

 genericFile.close();

 genericFile.open("socorroRead.txt", ios::in);
 if(genericFile.is_open()){
     string linha;
        while(getline(genericFile, linha))
        cout << linha << endl;


 } else { cout << "deu merda rapaz" << endl; }


 genericFile.close();



    cout << "Hello world!" << endl;
    return 0;
}
