#include <iostream>
#include <bits/stdc++.h>


using namespace std;



// Referência: https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
string upper(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

bool deumerda(string tabela, string comando){

if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" || upper(tabela) == "LT" || upper(tabela) == "CT") {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    return true;

            }


}


// Referência: https://stackoverflow.com/questions/45322228/c-how-to-skip-first-whitespace-while-using-getline-with-ifstream-object-to
vector<string> split (string s, string delim) {
    vector<string> lista;
    size_t pos = 0;
    string token;
    while ((pos = s.find(delim)) != string::npos) {
        token = s.substr(0, pos);
        lista.push_back(token);
        s.erase(0, pos + delim.length());
    }
    lista.push_back(s);
    return lista;
}

int main()
{
    string comando = "";
    while(upper(comando) != "EB") {
        cin >> comando;
        if(upper(comando) == "CT") {
            string tabela, campos;
            vector<string> lista;
            cin >> tabela;


           // if(deumerda(tabela, comando)) break;


            if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;

                }

            getline(cin >> std::ws, campos);
            lista = split(campos, ";");
            cout << "Criou tabela " << tabela << endl;
            for (auto i : lista) cout << i << endl;
        }
        else if(upper(comando) == "RT") {
            string tabela;
            cin >> tabela;

      //      cout << "to aq";
     //   if(deumerda(tabela, comando)) break;

        if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;

                }

            cout << "Removeu tabela " << tabela << endl;
        }
        else if(upper(comando) == "AT") {
            string tabela;
            cin >> tabela;

               if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                    cout << "Comando errado" << endl;
                    comando = "EB";
                    break;

                }

            cout << "Resume tabela " << tabela << endl;
        }
        else if(upper(comando) == "LT") {
            cout << "Nomeia tabelas" << endl;
        }
        else if(upper(comando) == "IR") {
            string tabela, registro;
            vector<string> lista;
            cin >> tabela;

               if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;

                }

            getline(cin >> std::ws, registro);
            lista = split(registro, ";");
            cout << "Registro " << registro << " inserido na tabela " << tabela << endl;
            for (auto i : lista) cout << i << endl;
        }
        else if(upper(comando) == "BR") {
            string tabela, busca;
            cin >> comando >> tabela;

                   if(upper(comando) == "RT" || upper(comando) == "AT" || upper(comando) == "IR" ||
               upper(comando) == "LT" || upper(comando) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;

                }

               if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

            getline(cin >> std::ws, busca);
            if(upper(comando) == "N") {
                cout << "Busca em tabela " << tabela << " todas as ocorrencias de " << busca << endl;
            }
            else if(upper(comando) == "U") {
                cout << "Busca em tabela " << tabela << " a primeira ocorrencia de " << busca << endl;
            }
            else{
            cout << "Comando errado" << endl;
            comando = "EB";
            }
        }
        else if(upper(comando) == "AR") {
            string tabela;
            cin >> tabela;

            if(upper(comando) == "RT" || upper(comando) == "AT" || upper(comando) == "IR" ||
               upper(comando) == "LT" || upper(comando) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;

                }
            cout << "Apresenta na tela os valores da ultima busca" << endl;
        }
        else if(upper(comando) == "RR") {
            string tabela;
            cin >> tabela;

            if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

            cout << "Remove os registros da ultima busca" << endl;
        }
        else if(upper(comando) == "CI") {
            string tabela, chave;
            cin >> comando >> tabela >> chave;

            if(upper(comando) == "RT" || upper(comando) == "AT" || upper(comando) == "IR" ||
               upper(comando) == "LT" || upper(comando) == "CT" || upper(comando) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

                if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }


                if(upper(chave) == "RT" || upper(chave) == "AT" || upper(chave) == "IR" ||
               upper(chave) == "LT" || upper(chave) == "CT" || upper(chave) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }


            if(upper(comando) == "A") {
                cout << "Indice A criado" << endl;
            }
            else if(upper(comando) == "H") {
                cout << "Indice H criado" << endl;
            }
            else{
            cout << "Comando errado" << endl;
            comando = "EB";
            }
        }
        else if(upper(comando) == "RI") {
            string tabela, chave;
            cin >> tabela >> chave;

              if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

                  if(upper(chave) == "RT" || upper(chave) == "AT" || upper(chave) == "IR" ||
               upper(chave) == "LT" || upper(chave) == "CT" || upper(chave) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

            cout << "Indice relativo a chave " << chave << " removido" << endl;
        }
        else if(upper(comando) == "GI") {
            string tabela, chave;
            cin >> tabela;

              if(upper(tabela) == "RT" || upper(tabela) == "AT" || upper(tabela) == "IR" ||
               upper(tabela) == "LT" || upper(tabela) == "CT" || upper(tabela) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

                if(upper(chave) == "RT" || upper(chave) == "AT" || upper(chave) == "IR" ||
               upper(chave) == "LT" || upper(chave) == "CT" || upper(chave) == "AR")
                {
                cout << "Comando errado" << endl;
                    comando = "EB";
                    break;
                }

            cout << "Indice de tabela gerado novamente" << endl;
        }
        else if(upper(comando) == "EB");
        else {
            cout << "Comando errado" << endl;
            comando = "EB";
        }
    }
    return 0;
}
