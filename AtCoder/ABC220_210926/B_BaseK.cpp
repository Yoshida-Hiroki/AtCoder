#include <bits/stdc++.h>

using namespace std;

int main(){
  int K;
  cin >> K;
  long long A,B;
  cin >> A >> B;


  long long A_5,A_4,A_3,A_2,A_1,A_0;
  A_5 = A/100000;
  A_4 = (A-A_5*100000)/10000;
  A_3 = (A-A_5*100000-A_4*10000)/1000;
  A_2 = (A-A_5*100000-A_4*10000-A_3*1000)/100;
  A_1 = (A-A_5*100000-A_4*10000-A_3*1000-A_2*100)/10;
  A_0 = A-A_5*100000-A_4*10000-A_3*1000-A_2*100-A_1*10;

  long long a;
  a = A_5*pow(K,5.0)+A_4*pow(K,4.0)+A_3*pow(K,3.0)+A_2*pow(K,2.0)+A_1*pow(K,1.0)+A_0;

  long long B_5,B_4,B_3,B_2,B_1,B_0;
  B_5 = B/100000;
  B_4 = (B-B_5*100000)/10000;
  B_3 = (B-B_5*100000-B_4*10000)/1000;
  B_2 = (B-B_5*100000-B_4*10000-B_3*1000)/100;
  B_1 = (B-B_5*100000-B_4*10000-B_3*1000-B_2*100)/10;
  B_0 = B-B_5*100000-B_4*10000-B_3*1000-B_2*100-B_1*10;

  long long b;
  b = B_5*pow(K,5.0)+B_4*pow(K,4.0)+B_3*pow(K,3.0)+B_2*pow(K,2.0)+B_1*pow(K,1.0)+B_0;

  long long ans;
  ans = a*b;
  cout << ans << endl;
}
