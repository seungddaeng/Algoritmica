#include <iostream>
#include <vector>

using namespace std;

vector<string> grafo;
int vx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int vy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int filas, columnas;

void dfs(int fila, int columna)
{
    grafo[fila][columna] = '.';
    for (int i = 0; i < 8; i++)
    {
        int nuevaFila = fila + vx[i];
        int nuevaColumna = columna + vy[i];
        if (nuevaFila >= 0 && nuevaColumna >= 0 && nuevaFila < filas && nuevaColumna < columnas && grafo[nuevaFila][nuevaColumna] == '#')
        {
            dfs(nuevaFila, nuevaColumna);
        }
    }
}

int countLoops()
{
    int amoebas = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (grafo[i][j] == '#')
            {
                dfs(i, j);
                amoebas++;
            }
        }
    }
    return amoebas;
}

int main()
{
    cin >> filas >> columnas;
    grafo.resize(filas);
    for (int i = 0; i < filas; i++)
    {
        cin >> grafo[i];
    }
    int loops = countLoops();
    cout << loops << endl;
    return 0;
}
