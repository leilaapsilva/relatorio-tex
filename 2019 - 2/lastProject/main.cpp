#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Referência: https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
string upper(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

// Referência: https://stackoverflow.com/questions/45322228/c-how-to-skip-first-whitespace-while-using-getline-with-ifstream-object-to
vector<string> split(string s, string delim) {
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

string splits(string &s) {
    size_t pos = 0;
    string token;
    pos = s.find(" ");
    token = s.substr(0, pos);
    while(s[pos] == ' ') {
        pos++;
    }
    s.erase(0, pos);
    return token;
}

int main()
{
    string comando, linha;
    while(upper(comando) != "EB") {
        getline(cin >> ws, linha);
        comando = splits(linha);
        if(upper(comando) == "CT") {
            string tabela, campos;
            vector<string> lista;
            tabela = splits(linha);
            campos = linha;
            if(tabela.empty() || campos.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                lista = split(campos, ";");
                cout << "Criou tabela " << tabela << endl;
                for (auto i : lista) cout << i << endl;
            }
        }
        else if(upper(comando) == "RT") {
            string tabela;
            tabela = splits(linha);
            if(!linha.empty() || tabela.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                cout << "Removeu tabela " << tabela << endl;
            }
        }
        else if(upper(comando) == "AT") {
            string tabela;
            tabela = splits(linha);
            if(!linha.empty() || tabela.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                cout << "Resume tabela " << tabela << endl;
            }
        }
        else if(upper(comando) == "LT") {
            if(!linha.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            cout << "Nomeia tabelas" << endl;
        }
        else if(upper(comando) == "IR") {
            string tabela, registro;
            vector<string> lista;
            tabela = splits(linha);
            registro = linha;
            if(tabela.empty() || registro.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                lista = split(registro, ";");
                cout << "Registro " << registro << " inserido na tabela " << tabela << endl;
                for (auto i : lista) cout << i << endl;
            }
        }
        else if(upper(comando) == "BR") {
            string tabela, busca;
            comando = splits(linha);
            tabela = splits(linha);
            busca = linha;
            if(upper(comando) == "N" && !tabela.empty() && !busca.empty()) {
                cout << "Busca em tabela " << tabela << " todas as ocorrencias de " << busca << endl;
            }
            else if(upper(comando) == "U" && !tabela.empty() && !busca.empty()) {
                cout << "Busca em tabela " << tabela << " a primeira ocorrencia de " << busca << endl;
            }
            else {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
        }
        else if(upper(comando) == "AR") {
            string tabela;
            tabela = splits(linha);
            if(!linha.empty() || tabela.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                cout << "Apresenta na tela os valores da última busca" << endl;
            }
        }
        else if(upper(comando) == "RR") {
            string tabela;
            tabela = splits(linha);
            if(!linha.empty() || tabela.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                cout << "Remove os registros da última busca" << endl;
            }
        }
        else if(upper(comando) == "CI") {
            string tabela, chave;
            comando = splits(linha);
            tabela = splits(linha);
            chave = splits(linha);
            if(upper(comando) == "A" && !tabela.empty() && !chave.empty() && linha.empty()) {
                cout << "Indice A criado" << endl;
            }
            else if(upper(comando) == "H" && !tabela.empty() && !chave.empty() && linha.empty()) {
                cout << "Indice H criado" << endl;
            }
            else {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
        }
        else if(upper(comando) == "RI") {
            string tabela, chave;
            tabela = splits(linha);
            chave = splits(linha);
            if(tabela.empty() || chave.empty() || !linha.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                cout << "Indice relativo a chave " << chave << " removido" << endl;
            }
        }
        else if(upper(comando) == "GI") {
            string tabela, chave;
            tabela = splits(linha);
            chave = splits(linha);
            if(tabela.empty() || chave.empty() || !linha.empty()) {
                cout << "Comando errado" << endl;
                comando = "EB";
            }
            else {
                cout << "Indice de tabela gerado novamente" << endl;
            }
        }
        else if(upper(comando) == "EB");
        else {
            cout << "Comando errado" << endl;
            comando = "EB";
        }
    }
    return 0;
}
