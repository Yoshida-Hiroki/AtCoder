#include <bits/stdc++.h>

using namespace std;

int main(){
  string S,T;
  cin >> S;
  cin >> T;

  for(int i =0;i<S.size()-1;i++){
    if(S.at(i)==T.at(i)){
    }
    else{
      if(S.at(i)==T.at(i+1)&&S.at(i+1)==T.at(i)){
        i += 1;
      }
      else{
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}
