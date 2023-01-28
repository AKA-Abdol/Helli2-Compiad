#include <bits/stdc++.h>

using namespace std;

struct Runner {
    int rank;
    int meanV;
};

typedef vector<Runner> VR;

int main() {
    int n;
    VR runners;
    cin >> n;
    for(int i = 0; i < n; i++) {
        Runner temp;
        cin >> temp.rank >> temp.meanV;
    }
    for(Runner r : runners)
        if(r.rank == 3){
            cout << r.meanV << endl;
            break;
        }
    return 0;
}