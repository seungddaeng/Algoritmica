#include <iostream>
#include <vector>
 
using namespace std;
 
vector<string> grid;
int rows, cols;
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
 
void dfs(int x, int y) {
    grid[x][y] = '.'; 
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == '@') {
            dfs(nx, ny); 
        }
    }
}
 
int countOilDeposits() {
    int deposits = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == '@') {
                dfs(i, j); 
                deposits++;
            }
        }
    }
    return deposits;
}
 
int main() {
    while (cin >> rows >> cols && (rows != 0 && cols != 0)) {
        grid.resize(rows);
        for (int i = 0; i < rows; ++i) {
            cin >> grid[i];
        }
        int oilDeposits = countOilDeposits();
        cout << oilDeposits << endl;
    }
    return 0;
}
