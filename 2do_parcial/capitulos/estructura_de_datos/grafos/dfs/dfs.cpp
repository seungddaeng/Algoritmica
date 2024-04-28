#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin) //abre un archivo "in.txt" para poder leerlo
#define output freopen("out.txt","w",stdout)// abre un archivo "out.txt" para poder escribir

bool vis[10000];//declara un arreglo para marcar nodos como visitados

vector<int> grafo[10000];//se eclara un vector para representar el grafo

void dfs (int nodoInicial) {//se define para hacer un recorrido dfs en el grafo
    
    stack<int> pilita;//se crea una pila para almacenar los nodos que se van a visitar
    pilita.push(nodoInicial);// agregamos el nodo inicial a la pila
    while(!pilita.empty()){ //mientras la pila no esté vacía...
        int nodoActual = pilita.top();// toma el nodo que se encuentra en el tope de la pila
        pilita.pop();// saca el nodo de la pila con el método pop
        if(!vis[nodoActual]) {//si el nodo actual no ha sido visitado...
            vis[nodoActual] = true;// se marca como visitado
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){// visita los nodos adyacentes al nodo actual
                int amigo = grafo[nodoActual][i];// toma el amigo del nodo
                if(!vis[amigo]) {// si el amigo del nodo no ha sido visitado...
                    pilita.push(amigo);//agrégalo a la pila para visitarlo después
                } 
            }   
        }
    }
}

int main() {
    input;
    int nodos, aristas;
    cin>>nodos>>aristas; // 11 19
    for(int i = 0 ; i < aristas; i++ ) {
        int nodoInicial, nodoFinal;
        cin>>nodoInicial>>nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal);
    }
    // Si el nodo S puede llegar al nodo T
    int S,T; // 1 7
    cin>>S>>T;
    dfs(S);
    if(vis[T]) { // logre visitar el 7 
        cout<<"Si lo podria conocer"<<endl;
    } else {
        cout<<"No lo podria conocer"<<endl;
    }
}
