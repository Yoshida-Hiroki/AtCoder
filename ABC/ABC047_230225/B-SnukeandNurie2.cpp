// Minimal templete at 2023/2/20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  // code
  int W,H,N;
  cin >> W>>H>>N;

  vector<int> x(N),y(N),a(N);
  for(int i=0;i<N;i++){
    cin >> x[i] >> y[i] >> a[i];
  }
  
  int id_mx=0,id_Mx=W,id_my=0,id_My=H;
  for(int i=0;i<N;i++){
    if(a[i]==1){
      id_mx = max(id_mx,x[i]);
    }
    else if(a[i]==2){
      id_Mx = min(id_Mx,x[i]);
    }
    else if(a[i]==3){
      id_my = max(id_my,y[i]);
    }
    else if(a[i]==4){
      id_My = min(id_My,y[i]);
    }
  }
  int ans;
  if(id_Mx-id_mx >= 0 && id_My-id_my >= 0){
    ans = (id_Mx-id_mx)*(id_My-id_my);
  }
  else{
    ans = 0;
  }
  cout << ans << endl; 
}