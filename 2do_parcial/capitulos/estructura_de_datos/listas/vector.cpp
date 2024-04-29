#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> vectorcito(10,"skz");// crea un vector llamado "vectorcito" con 10 elementos, todos inicializados como "skz"
    
    vectorcito.push_back("seung");//agrega el string "seung" al final del vector
    
    cout<<"tamaño del vector: "<< vectorcito.size()<<endl;//imprime el tamaño del vector
    for(int i = 0 ; i < vectorcito.size() ; i++) {//imprime el índice y el valor de cada elemento en el vector
        cout<<i<<" "<< vectorcito[i]<<endl;
    }
    return 0;
}
