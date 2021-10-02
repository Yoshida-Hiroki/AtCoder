#include <bits/stdc++.h>

using namespace std;

int main(){
  double X;
  cin >> X ;
  int temp = 10*X;
  int Y = temp % 10;

  if(0<=Y && Y<=2) cout << (int)X << "-" <<endl;
  else if(3<=Y&&Y<=6) cout << (int)X << endl;
  else if(7<=Y && Y<=9) cout << (int)X << "+" << endl;
}
