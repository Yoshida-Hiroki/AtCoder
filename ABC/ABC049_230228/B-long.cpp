// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int H,W;
  cin >> H >> W;
  char C[H][W];
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> C[i][j];
    }
  }
  for(int i=0;i<H;i++){
    for(int k=0;k<2;k++){
      for(int j=0;j<W;j++){
        cout << C[i][j];
      }
      cout << endl;
    }
  }
  
}
