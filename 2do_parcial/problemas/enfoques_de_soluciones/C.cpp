#include <iostream>
#include <vector>
using namespace std;

int total_gold_coins(int d) {
    int c = 0;  
    int l = 1;  

    while (d > 0) {
        if (d < l) {
            c += d * l;
            d = 0;
        } else {
            c += l * l;
            d -= l;
            l++;
        }
    }

    return c;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int d;
        vector<int> t;

        while (cin >> d && d != 0) {
            t.push_back(d);
        }
        for (int day : t) {
            cout << day << " " << total_gold_coins(day) << endl;
        }
        if (i < T - 1) {
            cout << endl;
        }
    }
    return 0;
}
