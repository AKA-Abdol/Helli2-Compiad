#include<iostream>
#include<vector>
using namespace std;

int customMax(vector<int> v){
	int mx = v[0];
	for(int i : v)
		if(i > mx)
			mx = i;
	return mx;
}

vector<int> customRemove(vector<int> v, int rem){
	vector<int> ans;
	bool flag = false;
	for(int i : ans){
		if(i != rem || flag)
			ans.push_back(i);
		if(i == rem && !flag)
			flag = true;
	}
	return ans;
}

int main(){
	vector<int> v;
	int n, temp;
	cin >> n;
	while(n--){
		cin >> temp;
		v.push_back(temp);
	}
	int mx = customMax(v);
	cout << customMax(customRemove(v, mx)) << endl;
	return 0;
}

