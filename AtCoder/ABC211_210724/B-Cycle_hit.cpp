#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> s(4);
  vector<string> S={"H","2B","3B","HR"};
  vector<int> pool(4,1);

  for(int i =0;i<4;i++){
    cin >> s.at(i);
    for(int j=0;j<4;j++){
      if(s.at(i)==S.at(j)){
        pool.at(j)--;
      }
    }
  }
  if(pool.at(0)==0&&pool.at(1)==0&&pool.at(2)==0&&pool.at(3)==0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
