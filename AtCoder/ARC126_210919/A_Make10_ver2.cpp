#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;

  vector<vector<long long>> c(T,vector<long long>(3));
  for(int i = 0 ; i < T ; i++){
    cin >> c[i][0] >> c[i][1] >> c[i][2];
  }

  vector<int> ans(T,0);
  for(int i=0;i<T;i++){
    if(2*c[i][2]<=c[i][1]){
      ans[i]+=c[i][2];
      c[i][2] -= c[i][2];
      c[i][1] -= 2*c[i][2];
    }
    else{
      ans[i]+=c[i][1];
      c[i][2]-= 2*c[i][1];
      c[i][1] -= c[i][1];
    }
    cout<< ans[i] << endl;
  }
  for(int i=0;i<T;i++){
    if(c[i][2]/2<=c[i][0]){
      ans[i]+=c[i][2];
      c[i][2] -= c[i][2];
      c[i][0] -= c[i][2]/2;
    }
    else{
      ans[i]+=c[i][0];
      c[i][2]-= c[i][0]/2;
      c[i][0] -= c[i][0];
    }
    cout<< ans[i] << endl;
  }
  for(int i =0;i<T;i++){
    if(3*c[i][2]<=c[i][0]){
      ans[i]+=c[i][2];
      c[i][2] -= c[i][2];
      c[i][0] -= 3*c[i][2];
    }
    else{
      ans[i]+=c[i][0];
      c[i][2]-= 3*c[i][0];
      c[i][0] -= c[i][0];
    }
    cout<< ans[i] << endl;
  }
  for(int i=0;i<T;i++){
    if(c[i][1]<=c[i][0]){
      ans[i]+=c[i][1]/2;
    }
    else{
      ans[i]+=c[i][0]/2;
    }
    cout<< ans[i] << endl;
  }
  for(int i=0;i<T;i++){
    ans[i] += c[i][0]/5;
  }
}
