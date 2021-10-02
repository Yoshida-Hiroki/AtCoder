#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> S(4);
  S[0] = 'aho';
  cin >> S[1];
  cin >> S[2];
  cin >> S[3];

  string T;
  cin >> T;

  for(int i = 0; i < T.size();i++){
    if(T.at(i)=='1'){
      cout << S.at(1);
    }
    else if(T.at(i)=='2'){
      cout << S.at(2);
    }
    else{
      cout << S.at(3);
    }
  }
  cout << endl;
}
