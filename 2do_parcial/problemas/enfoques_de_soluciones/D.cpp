#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 10000;
vector<int> cycleLengths(MAX_N + 1, 0);

int calculateCycleLength(int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2; // Cambio en la división
        } else {
            n = 3 * n + 1;
        }
        ++length;
    }
    return length;
}

int findMaxCycleLength(int i, int j) {
    int maxCycle = 0;
    for (int num = min(i, j); num <= max(i, j); ++num) {
        if (num <= MAX_N && cycleLengths[num] != 0) {
            maxCycle = max(maxCycle, cycleLengths[num]);
        } else {
            int currentCycle = calculateCycleLength(num);
            maxCycle = max(maxCycle, currentCycle);
            if (num <= MAX_N) {
                cycleLengths[num] = currentCycle;
            }
        }
    }
    return maxCycle;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        cout << i << " " << j << " " << findMaxCycleLength(i, j) << endl;
    }
    return 0;
}
