#include <iostream>
#include <vector>

using namespace std;

int rows, cols;
vector<string> sky;

bool isValid(int x, int y) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

bool isStar(int x, int y) {
    if (sky[x][y] != '*') return false;
    for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
            if (dx == 0 && dy == 0) continue;
            int nx = x + dx, ny = y + dy;
            if (isValid(nx, ny) && sky[nx][ny] == '*') return false;
        }
    }
    return true;
}

int countStars() {
    int stars = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (isStar(i, j)) stars++;
        }
    }
    return stars;
}

int main() {
    while (cin >> rows >> cols && (rows != 0 && cols != 0)) {
        sky.resize(rows);
        for (int i = 0; i < rows; ++i) {
            cin >> sky[i];
        }
        int stars = countStars();
        cout << stars << endl;
    }
    return 0;
}
