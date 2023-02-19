#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> S(10),ans(10);
  for(int i =0;i<10;i++){
    cin >> S.at(i);
  }
  for(int i =0;i<10;i++){
    if(S[i] == "0"){
      ans[i] = "0";
    }
    else if(S[i] == "1"){
      ans[i] = "1";
    }
    else if(S[i] == "B"){
      ans.pop_back();
    }
  }
  for(int i=0;i<10;i++){
    cout << ans[i];
  }
}