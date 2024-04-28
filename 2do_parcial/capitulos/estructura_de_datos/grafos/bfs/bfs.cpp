#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt","r",stdin) //abre un archivo "in.txt" para poder leerlo
#define output freopen("out.txt","w",stdout)// abre un archivo "out.txt" para poder escribir

const int nodos = 10000;

bool vis[nodos];//se declara un arreglo para marcar nodos como visitados
vector<int> grafo[nodos];//se eclara un vector para representar el grafo
int niveles[nodos];//se declara un arreglo para almacenar los niveles de los nodos en el bfs

void bfs (int nodoInicial) {//se define para hacer un recorrido bfs en el grafo
    queue<int> colita;//creamos una cola para almacenar los nodos que se van a visitar
    colita.push(nodoInicial);//agrega el nodo inicial a la cola con el método push
    niveles[nodoInicial] = 0;//establecemos el nivel del nodo inicial como 0

    while(!colita.empty()){//mientras la cola no esté vacía, sigue visitando nodos
        int nodoActual = colita.front();//toma el nodo que está al frente de la cola
        
        colita.pop();//saca el nodo de la cola con el método pop
        
        if(!vis[nodoActual]) {//si el nodo actual no ha sido visitado
            vis[nodoActual] = true;//se marca como visitado
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){// visita los nodos cercanos al nodo actual
                int amigo = grafo[nodoActual][i];//toma un nodo "amigo"
                niveles[amigo] = niveles[nodoActual] + 1;//establece el nivel del nodo amigo
                if(!vis[amigo]) {//si el amigo del nodo no ha sido visitado
                    colita.push(amigo);//se agrega a la cola para visitarlo después
                } 
            }   
        }
    }
}

int main() {
    input;//redirige la entrada al archivo "in.txt"
    int nodos, aristas;//declara variables para el número de nodos y aristas
    cin>>nodos>>aristas;//lee el número de nodos y aristas

    for(int i = 0 ; i < aristas; i++ ) {//construye el grafo
        int nodoInicial, nodoFinal;//Lee los nodos que forman la arista
        cin>>nodoInicial>>nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal);
    }

    int S,T;//dclara los nodos inicial y final para verificar la conexión

    cin>>S>>T;// lee los nodos inicial y final desde la entrada

    bfs(S);//realiza un recorrido BFS desde el nodo inicial


    if(vis[T]) {//si el nodo final ha sido visitado, significa que es alcanzable desde el nodo inicial
        cout<<"Si lo podria conocer"<<endl;//informa que es posible alcanzar el nodo final
    } else {
        cout<<"No lo podria conocer"<<endl;//informa que no es posible alcanzar el nodo final

    }
}
