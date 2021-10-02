#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,M;
  cin >> N>>M;

  vector<int> S(N);
  vector<int> T(M);

  for(int i = 0; i< N; i++){
    cin >> S.at(i);
  }
  for(int j=0;j<M;j++){
    cin >> T.at(j);
  }



  int L, R;
  for (int i = 1; i < N; i++){
    L=i;
    if(S.at(i)!=S.at(0)){
      break;
    }
  }
  for(int j = N-1; 0<j; j--){
    R = N-j;
    if(S.at(j)!=S.at(0)){
      break;
    }
  }

  int first_shift = min(L,R);
  int change = 0;
  for(int i =0;i<M-1;i++){
    if(T.at(i)!=T.at(i+1)){
      change +=1;
    }
  }

  if(all_of(S.begin(),S.end(),[](int i){return i == 1;})&&any_of(T.begin(),T.end(),[](int i){return i == 0;})){
    cout << -1 << endl;
  }
  else if (all_of(S.begin(),S.end(),[](int i){return i == 0;})&&any_of(T.begin(),T.end(),[](int i){return i == 1;})){
      cout << -1 << endl;
  }
  else{
    if(change==0){
      if(S.at(0)==T.at(0)){
        cout << M << endl;
      }
      else{
        cout << first_shift+M << endl;
      }
    }
    else{
      if(S.at(0)==T.at(0)){
        cout << M+first_shift+change-1 << endl;
      }
      else{
        cout << first_shift+M+change << endl;
      }
    }
  }
}
