// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;

int main(){
  // code
  string S[3];
  cin >> S[0] >> S[1] >> S[2];

  int tern = 0;
  vector<int> order(3,0);
  while(1){
    if(S[tern].size() == order[tern]){
      if(tern == 0){
        cout << 'A' << endl;
      }
      else if(tern == 1){
        cout << 'B' << endl;
      }
      else if(tern == 2){
        cout << 'C' << endl;
      }
      return 0;
    }
    else{
      if(S[tern][order[tern]]=='a'){
        order[tern] += 1;
        tern = 0;
      }
      else if(S[tern][order[tern]]=='b'){
        order[tern] += 1;
        tern = 1;
      }
      else if(S[tern][order[tern]]=='c'){
        order[tern] += 1;
        tern = 2;
      }
    }
  }
}
