#include <bits/stdc++.h>

using namespace std;

int main(){
  int L,Q;
  cin >> L >> Q ;
  vector<int> c(Q);
  vector<int> x(Q);

  for(int i = 0 ; i < Q ; i++){
    cin >> c.at(i) >> x.at(i);
  }

  vector<int> cut={L};
  for(int i = 0;i<Q;i++){
    int sum = 0;
    if(c.at(i)==1){
      for(int j = 0; j<cut.size();j++){
        if(sum < x.at(i)){
          sum += x.at(i);
        }
        else{
          auto itr = i;
          itr = cut.insert(itr,x.at(i)-sum);
          x.at(i) = 0;
        }
      }
    }
  }

  for(int i = 0;i<Q;i++){
    cout << cut.at(i)<<endl;
  }
}
