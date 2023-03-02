// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  string S;
  cin >> S;

  int DW=0;
  for(int i=0;i<S.size()-1;i++){
    if(S[i]!=S[i+1]){
      DW += 1;
    }
  }
  cout << DW << endl;
}
