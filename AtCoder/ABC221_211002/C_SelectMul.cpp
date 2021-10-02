#include <bits/stdc++.h>

using namespace std;

int SWAP(int a, int b){
  int temp;
  temp = a;
  a=b;
  b=temp;
  return 0;
}


int main(){
  long long N;
  cin >> N;

  vector<int> temp;
  while(N>0){
    temp.push_back(N%10);
    N /= 10;
  }
  sort(temp.begin(),temp.end(),greater<int>());

  std::vector<int> A,B;
  for(int i = 0;i<temp.size();i++){
    if(i%2==0){
      A.push_back(temp[i]);
    }
    else{
      B.push_back(temp[i]);
    }
  }

  for(int i = 0;i<B.size();i++){
    if(A[i]!=B[i]){
      std::swap(A[i],B[i]);
      break;
    }
  }

  for(int i = 0;i<A.size();i++){
    // cout << A[i];
  }
  // cout << endl;
  for(int i = 0;i<B.size();i++){
    // cout << B[i];
  }
  // cout << endl;

  long long a,b;
  for(int i = 0;i<A.size();i++){
    a += A[i]*pow(10,A.size()-1-i);
  }
  for(int i = 0;i<B.size();i++){
    b += B[i]*pow(10,B.size()-1-i);
  }
  // cout << a << endl;
  // cout << b << endl;

  cout << (long long )a*b << endl;
}
