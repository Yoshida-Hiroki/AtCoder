#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
  long long Q;
  cin >> Q ;

  vector<long long> bag;

  int P;
  long long X;
  for(int i=0;i<Q;i++){
    cin >> P;
    if(P==1){
      cin >> X;
      bag.push_back(X);
    }
    else if(P==2){
      cin >> X;
      // size_t size = bag.size();
      for(int i =0;i<(int)bag.size();i++){
        bag.at(i) += X;
      }
    }
    else{
      vector<long long>::iterator iter = min_element(bag.begin(),bag.end());
      size_t index = distance(bag.begin(),iter);
      cout << bag.at(index) << endl;
      bag.erase(iter);
    }
  }
}
