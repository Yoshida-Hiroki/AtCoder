#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> H(N),S(N);
  int X =100000;
  for(int i = 0;i<N;i++){
    cin >> H.at(i) >> S.at(i);
  }
  vector<int> LIM(N);
  for(int j =0;j<N;j++){
    LIM.at(j)=(X-H.at(j))/S.at(j);
  }
  LIM.sort();

}
