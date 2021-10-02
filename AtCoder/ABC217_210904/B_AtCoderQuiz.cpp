#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> T(3);
  for(int i = 0; i < 3; i++){
    cin >> T.at(i);
  }

  sort(T.begin(),T.end());
  if(T.at(0)=="ABC"){
    if(T.at(1)=="AGC"){
      if(T.at(2)=="AHC"){
        cout << "ARC" << endl;
      }
      else{
        cout << "AHC" << endl;
      }
    }
    else{
      cout << "AGC" << endl;
    }
  }
  else{
    cout << "ABC" << endl;
  }
}
