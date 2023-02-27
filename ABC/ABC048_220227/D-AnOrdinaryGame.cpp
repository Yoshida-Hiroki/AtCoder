// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  string s;
  cin >> s;
  
  if(s.size()%2==0 ^ s[0] == s[s.size()-1]){
    cout << "Second" << endl;
  }
  else{
    cout << "First" << endl;
  }
}
