#include <iostream>
#include <vector>
#include <stack>
#define pb push_back

using namespace std;

int main(){
  vector <int> v;
  stack <int> pilha;
  
  v.push_back(1);
  v.push_back(2);
  v.pb(3);
  
  
  
  for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
        endl;
        
        pilha.push(3);
        pilha.push(1);
        pilha.push(2);
        
        cout << "Quem esta no topo eeeeeeeeeeeeh:" << pilha.top() << endl;
        


        
  
  return 0;
  
  
  }
