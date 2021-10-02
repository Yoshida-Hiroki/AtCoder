#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> P(26);
  for(int i = 0;i<26;i++){
    cin >> P.at(i);
  }

  vector<string> alpha={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
  vector<string> ans;
  for(int i =0;i<26;i++){
    ans.push_back(alpha.at(P.at(i)-1));
  }

  for(int j =0;j<26;j++){
    cout << ans.at(j);
  }
  cout << endl;
}
