#include<bits/stdc++.h> 

using namespace std; 

int main() {
    stack<int> pilita; //crea una pila llamada "pilita"
    cout << pilita.empty() << endl; //comprueba si la pila está vacía e imprime el resultado (1 si está vacía, 0 si no lo está)
    pilita.push(10); //agrega el valor 10 a la pila
    cout << pilita.empty() << endl; //comprueba si la pila está vacía nuevamente e imprime el resultado
    cout << pilita.top() << endl; //imprime el elemento en la parte superior de la pila (10)
    cout << pilita.empty() << endl; // comprueba si la pila está vacía nuevamente e imprime el resultado
    pilita.pop(); //elimina el elemento en la parte superior de la pila
    cout << pilita.empty() << endl; //comprueba si la pila está vacía después de eliminar el elemento e imprime el resultado

    return 0; //retorna 0 para indicar que el programa finalizó correctamente
}
