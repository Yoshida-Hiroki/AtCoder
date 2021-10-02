#include <bits/stdc++.h>

using namespace std;

int main(){
  int A1,A2,A3;
  cin >> A1>>A2>>A3;

  if (A1<A2<A3 || A1>A2>A3){
    if ((A1+A3)>2*A2){
      if ((A1+A3)%2 == 0){
        cout << (A1+A3)/2-A2 << endl;
      }
      else{
        cout << (A1+A3)/2-A2 + 1 << endl;
      }
    }
    else {
      cout << 3 << endl;
    }
  }
  else if(A1<A2&&A2=A3){
    cout << A2-A1<< endl;
  }
  else if (A1=A2&&A2<A3){
    if((A3-A2)%2 == 0){
      cout<<(A3-A2)/2<<endl;
    }
    else{
      cout<<(A3-A2)/2+1<<endl;
    }
  }
  else if(A1>A3&&A3>A2){
    if((A1-A3)%2==0){
      cout << (A1-A3)/2-A2<<endl;
    }
    else {
        cout << (A1-A3)/2-A2+1<<endl;
    }
  }
  else if (A2>A1&&A1>A3){
    cout << 2*A2-A1-A3 << endl;
  }
  else{
    cout << 3 << endl;
  }
}
