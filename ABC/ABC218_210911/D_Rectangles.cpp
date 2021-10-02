#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<long long>> xy(N, vector<long long> (2));

  for(int i = 0; i<N;i++){
    cin >> xy.at(i).at(0) >> xy.at(i).at(1);
  }

  // set<long long> st;
  // for(int i =0;i<N;i++){
  //   st.insert(xy.at(i).at(0));
  // }

  // cout << endl;
  sort(xy.begin(),xy.end(),[](const vector<long long> &alpha, const vector<long long> &beta){return alpha[0] < beta[0];});
  // for(int i = 0;i < N ; i++){
  //   cout << xy.at(i).at(0) << " " << xy.at(i).at(1) << endl;
  // }

  long long counter=0;
  for(int i =0;i<N-1;i++){
    if(xy.at(i).at(0)==xy.at(i+1).at(0)){
      for(int j = i+2 ; j < N-1 ; j++){
        if(xy.at(j).at(0)==xy.at(j+1).at(0)){
          if(xy.at(i).at(1)==xy.at(j).at(1)||xy.at(i).at(1)==xy.at(j+1).at(1)){
            if(xy.at(i+1).at(1)==xy.at(j).at(1)||xy.at(i+1).at(1)==xy.at(j+1).at(1)){
              counter += 1;
            }
          }
        }
      }
    }
  }
  cout << counter << endl;
}
