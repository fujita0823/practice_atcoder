#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t,N; cin>>t>>N;
  ll cnt=0,a,b=0,k=0;
  vector<ll> col(100,0);
  while(k<100){
    b += 100+t;
    a  = 100 * ((b+99)/100);
    if(a-b > 0 && a-b <=t){
      col[cnt] = (b+99)/100;
      //cout << col[cnt] << endl;
      cnt++;
      if(cnt==N){
        cout << (b+99)/100 << endl;
        return 0;
      }
    }
    k++;
  }
  //cout << cnt << endl;
  ll ten = (N-1)/cnt;
  ll res = (N-1)%cnt;
  //cout << ten << " " << col[res] << endl;
  //if(res==0) cout << (100+t)*(ten) + col[res] << endl;
  cout << (100+t)*ten + col[res] << endl;
  return 0;
}