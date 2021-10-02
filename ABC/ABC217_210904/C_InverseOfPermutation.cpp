#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N ;
  vector<int> p(N,0);

  for(int i =0 ; i< N;i++){
    cin >> p.at(i);
  }

  vector<int> Q(N,0);
  std::vector<int>::iterator itr;
  for(int i = 0; i<N;i++){
    int temp = p.at(i);
    Q.at(temp-1)=i+1;
  }

  for(int j =0;j<N;j++){
    cout << Q.at(j) << " ";
  }
  cout << endl;
}
