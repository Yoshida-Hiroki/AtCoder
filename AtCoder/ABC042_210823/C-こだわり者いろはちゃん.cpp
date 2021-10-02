#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,K;
  cin >> N >> K;

  vector<int> ten={0,1,2,3,4,5,6,7,8,9};
  vector<int> D(K);
  for(int i =0;i<K;i++){
    cin >> D[i];
    remove(ten.begin(),ten.end(),D[i]);
  }
  int ans;
  for(int i = 0;i<10-K;i++){
    for(int j = 0;j<10-K;j++){
      for(int k = 0;k<10-K;k++){
        for(int l = 0;l<10-K;l++){
          for(int m = 0;m<10-K;m++){
            if(N<=ten[i]*10000+ten[j]*1000+ten[k]*100+ten[l]*10+ten[m]){
              ans = ten[i]*10000+ten[j]*1000+ten[k]*100+ten[l]*10+ten[m];
              break;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}
