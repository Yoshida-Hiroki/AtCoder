#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<char>> S(N,vector<char> (N));
  vector<vector<char>> T(N,vector<char> (N));

  for(int i = 0; i<N;i++){
    for(int j = 0; j < N;j++){
      cin >> S.at(i).at(j);
    }
  }
  for(int i = 0; i<N;i++){
    for(int j = 0; j < N;j++){
      cin >> T.at(i).at(j);
    }
  }

  for(int i = 0;i<N;i++){
    for(int j=0;j<N;j++){
      if(S.at(i).at(j)=='#'){
        break;
        if(j==(N-1)){
          for(int k=0;k<N;k++){
            S.erase(S.at(i).at(0),S.at(i).at(N-1));
          }
        }
      }
    }
  }

  // for(int i = 0;i<N;i++){
  //   for(int j=0;j<N;j++){
  //     if(S.at(j).at(i)=="#"){
  //       break;
  //       if(j==N-1){
  //         for(k=0;k<N;k++){
  //           S.at(i).pop_back();
  //         }
  //       }
  //     }
  //   }
  // }

  cout << endl;
  for(int i = 0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << S.at(i).at(j);
    }
    cout << endl;
  }
}
