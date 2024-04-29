#include<bits/stdc++.h>
using namespace std;

int main() {
    int array[10];//declara un arreglo llamado con 10 elementos

    memset(array, 0, 10); //establece todos los elementos en 0, sin embargo no siempre se inicializa en 0
    for(int i = 0; i < 10; i++) {//se hace un bucle for para establecer cada elemento en 0 nuevamente
        array[i] = 0;
    }

    array[i]; // accede al elemento en la posición i
    array[0] = 10; //establece el primer elemento en 10
    return 0;
}
