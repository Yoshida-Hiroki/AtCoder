#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <numeric>

using namespace std;

int main(){
  int N;
  vector<int> a(N);
  cin >> N;
  for(int i =0;i<N;i++){
    cin >> a[i];
  }

  int ave = 0;
  ave = round(accumulate(a.begin(),a.end(),0)/double(N));

  int ans=0;
  for(int i =0;i<N;i++){
    ans += pow(a[i]-ave,2.0);
  }
  cout << ans;
}
