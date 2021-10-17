#include <bits/stdc++.h>

using namespace std;

int main(){
  string S;
  cin >> S;

  string S_min = S, S_max=S;
  char temp;
  for(int j = 0 ; j < S.size() ; j++){
    temp = S.at(0);
    for(int i = 0 ; i < S.size()-1 ; i++){
      S.at(i)=S.at(i+1);
    }
    S.at(S.size()-1) = temp;
    if(S<S_min){
      S_min = S;
    }
    if(S>S_max){
      S_max = S;
    }
  }
  cout << S_min << endl;
  cout << S_max << endl;
}
