// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int sx,tx,sy,ty;
  cin >> sx >> sy >> tx >> ty;

  for(int i=0;i<ty-sy;i++){
    cout << 'U';
  }
  for(int i=0;i<tx-sx;i++){
    cout << 'R';
  }
  for(int i=0;i<ty-sy;i++){
    cout << 'D';
  }
  for(int i=0;i<tx-sx+1;i++){
    cout << 'L';
  }
  for(int i=0;i<ty-sy+1;i++){
    cout << 'U';
  }
  for(int i=0;i<tx-sx+1;i++){
    cout << 'R';
  }
  cout << 'D' << 'R';
  for(int i=0;i<ty-sy+1;i++){
    cout << 'D';
  }
  for(int i=0;i<tx-sx+1;i++){
    cout << 'L';
  }
  cout << 'U' << endl;
}
