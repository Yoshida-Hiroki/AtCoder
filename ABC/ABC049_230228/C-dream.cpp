// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  string S;
  cin >> S;

  while(S.length()>0){
    if(S.substr(0,7) == "dreamer" && S.substr(0,10) != "dreamerase"){
      S.erase(0,7);
    }
    else if(S.substr(0,6) == "eraser" && S.substr(0,9) != "eraserase"){
      S.erase(0,6);
    }
    else if(S.substr(0,5) == "dream" || S.substr(0,5) == "erase"){
      S.erase(0,5);
    }
    else{
      cout << "NO" << endl;
      return 0;
    }
  }
  if(S.length()==0){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}
