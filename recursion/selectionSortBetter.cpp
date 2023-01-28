#include <bits/stdc++.h>

using namespace std;

typedef vector<int> VI;

void recursiveSelectionSort(VI& v, int index = 0) {
    if(v.size() - 1 == index)
        return;

    VI::iterator maxx = max_element(v.begin() + index, v.end());
    // insert max element into the index-th index
    recursiveSelectionSort(v, index + 1);
}

int main() {

    VI v = {12, 5, -2, 3, -2, 98};
    VI ans;
    recursiveSelectionSort(ans, v);
    for(int x : ans)
        cout << x << " ";
    return 0;
}