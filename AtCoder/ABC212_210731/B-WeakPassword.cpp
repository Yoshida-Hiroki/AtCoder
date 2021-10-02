#include <bits/stdc++.h>

using namespace std;

int main(){
  int X;
  cin >> X;

  if(X%1111==0||X==1234||X==2345||X==3456||X==4567||X==5678||X==6789||X==7890||X==8901||X==9012||X==123){
    cout << "Weak" << endl;
  }
  else{
    cout << "Strong" << endl;
  }
}
