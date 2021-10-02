#include <bits/stdc++.h>

using namespace std;

int main(){
  bool f = true;
  int N;
  cin >> N;
  string S;
  cin >> S;

  if(!(N%2)||S.at(N/2)!='b'){
    f = false;
  }
  for(int i=0;i<N/2;i++){
    if((S.at(i)=='b' && S.at(N-i-1)!= 'b')||(S.at(i) == 'c' && S.at(N-i-1) != 'a')||(S.at(i) == 'a' && S.at(N-i-1) != 'c')){
      f = false;
    }
  }
  cout << (f?N/2:-1) << endl;
}
