#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> first_track(n), second_track(n);
    for (int i = 0; i < n; ++i) {
        cin >> first_track[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> second_track[i];
    }

    if (first_track[0] == 0) {
        cout << "NO" << endl; 
        return 0;
    }

    if (first_track[s - 1] == 1) {
        cout << "YES" << endl; 
        return 0;
    }

    if (second_track[s - 1] == 0) {
        cout << "NO" << endl; 
        return 0;
    }

    for (int i = s; i < n; ++i) {
        if (first_track[i] == 1 && second_track[i] == 1) {
            cout << "YES" << endl; 
            return 0;
        }
    }

    cout << "NO" << endl; 
    return 0;
}
