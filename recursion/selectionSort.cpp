#include <bits/stdc++.h>

using namespace std;

typedef vector<int> VI;

void recursiveSelectionSort(VI& ans, VI v) {
    if(!v.size())
        return;

    VI::iterator maxx = max_element(v.begin(), v.end());
    ans.push_back(*maxx);
    v.erase(maxx);
    recursiveSelectionSort(ans, v);
}

int main() {

    VI v = {12, 5, -2, 3, -2, 98};
    VI ans;
    recursiveSelectionSort(ans, v);
    for(int x : ans)
        cout << x << " ";
    return 0;
}