#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    //input;
    //output;
    int numCar;
    while(cin>>numCar && numCar) {
        vector<pair<int, int>> cars(numCar);
        for(int i = 0; i < numCar; i++){
            int car, finalPos;
            cin >> car >> finalPos;
            cars[i] = make_pair(car, finalPos);
        }

        vector<int> positions(numCar, 0);
        bool noSolution = false;

        for(int i = 0; i < numCar; i++) {
            int car = cars[i].first;
            int finalPos = cars[i].second;

            if(i + finalPos >= numCar || i + finalPos < 0 || positions[i + finalPos] != 0) {
                noSolution = true;
                break;
            }

            positions[i + finalPos] = car;
        }

        if(noSolution){
            cout << -1 << endl;
        } else {
            cout << positions[0];
            for(int i = 1; i < numCar; i++){
                cout << " " << positions[i];
            }
            cout << endl;
        }
    }
       
    return 0; 
}
