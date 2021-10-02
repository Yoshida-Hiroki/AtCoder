#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long Int;

#define INF (1LL << 60)

Int n, h[108000], s[108000];

bool able(Int top){
	vector<Int> limit;
	for(int i = 0;i < n;i++){
		if(h[i] > top)return false;
		limit.push_back((top - h[i]) / s[i]);
	}
	sort(limit.begin(), limit.end());
	for(int i = 0;i < n;i++){
		if(limit[i] < i)return false;
	}
	return true;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> h[i] >> s[i];
	}
	Int bottom = 0, top = INF;

	while(top - bottom > 1){
		Int mid = (bottom + top) / 2;
		if(able(mid))top = mid;
		else bottom = mid;
	}
	cout << top << endl;
	return 0;
}
