#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,si,sj;
  cin >> N >> si >> sj;

  vector<vector<char>> c(N+2,vector<char>(N+2,1));
  for(int i = 1; i<N+1 ; i++){
    for(int j = 1; j<N+1 ; j++){
      cin >> c.at(i).at(j);
    }
  }
  char s1 = \#;

  if(strcmp(c.at(si-1).at(sj),s1) != 0){
    cout << "LR" << endl;
  }
  // else if(c.at(si).at(sj+1) == "5"||c.at(si).at(sj+1) == "6"||c.at(si).at(sj+1) == "7"||c.at(si).at(sj+1) == "8"||c.at(si).at(sj+1) == "9"){
  //   cout << "UD" << endl;
  // }
  // else if(c.at(si).at(sj-1) == "5"||c.at(si).at(sj-1) == "6"||c.at(si).at(sj-1) == "7"||c.at(si).at(sj-1) == "8"||c.at(si).at(sj-1) == "9"){
  //   cout << "DU" << endl;
  // }
  // else if(c.at(si+1).at(sj) == "5"||c.at(si+1).at(sj) == "6"||c.at(si+1).at(sj) == "7"||c.at(si+1).at(sj) == "8"||c.at(si+1).at(sj) == "9"){
  //   cout << "RL" << endl;
  // }
}
