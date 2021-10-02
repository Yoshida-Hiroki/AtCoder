#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> s(100000);

  for(long long i = 0;i<10000;i++){
    cin >> s.at(i);
    if(cin.eof()){
      break;
    }
  }
  cout << s.at(1) << endl;
}
