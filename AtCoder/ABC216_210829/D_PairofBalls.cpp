#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,M;
  cin >> N >> M;

  vector<int> k(M,0);
  vector<vector<int>> A(M,vector<int>(N));
  for(int i = 0; i < M; i++){
    cin >> k.at(i);
    for(int j = 0 ; j < k.at(i); j++){
      cin >> A.at(i).at(j);
    }
  }

  for(int i =0;i<M;i++){
    for(int j = 0; j< M;j++){
      if(A.at(j).back()==0){
        A.at(j).pop_back();
      }
    }
  }

  for(int i=0;i<M;i++){
    for(int j = i+1;j<M;j++){
      if(A.at(i).back()==A.at(j).back()){
        A.at(i).pop_back();
        A.at(j).pop_back();
      }
      else{
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
