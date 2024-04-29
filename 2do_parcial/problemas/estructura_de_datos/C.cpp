#include<bits/stdc++.h>

using namespace std;

bool isJolly(const vector<int>& sequence) {
    int n = sequence.size();
    if (n == 1)
        return true;

    unordered_set<int> differences;
    for (int i = 1; i < n; ++i) {
        int diff = abs(sequence[i] - sequence[i - 1]);
        if (diff == 0 || diff >= n || differences.count(diff))
            return false;
        differences.insert(diff);
    }
    return differences.size() == n - 1;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> sequence(n);
        for (int i = 0; i < n; ++i) {
            cin >> sequence[i];
        }
        if (isJolly(sequence))
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    return 0;
}
