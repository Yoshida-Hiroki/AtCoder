// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;

int main(){
  // code
  string w;
  vector<bool> alph(26),alph2(26);
  string alphabets("abcdefghijklmnopqrstuvwxyz");
  cin >> w;

  for(int i=0;i<w.size();i++){
    alph[alphabets.find(w[i])] = alph[alphabets.find(w[i])] ^ 1;
  }
  
  if(alph == alph2){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
