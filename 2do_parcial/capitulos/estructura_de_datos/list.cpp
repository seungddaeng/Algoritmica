#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    output;
    list<int> listita; // crea una lista llamada "listita"

    listita.push_back(1);// agrega los números 1, 2 y 3 al final de la lista
    listita.push_back(2);
    listita.push_back(3);

    list<int>::iterator it;// declara un iterador para la lista

    it = listita.end();// asigna el iterador al final de la lista

    cout << *it << endl;// imprime el valor apuntado por el iterador (que no es válido)
    
    for (it = listita.begin(); it != listita.end(); it++) {// recorre la lista e imprime cada elemento
        cout << *it << endl;
    }
    return 0;
}
