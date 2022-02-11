#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll l,r; cin>>l>>r;
  if(r-l > 2018){
    cout << 0 << endl; return 0;
  }
  l%=2019; r%=2019;
  if(l>r){ 
    cout << 0 << endl; return 0;
  }
  ll min=2019*2019;
  for(int i=l; i<r+1; i++){
    for(int j=l; j<i; j++){
//      cout << i*j%2019 << endl;
      if(i*j%2019 < min) min=i*j%2019;
    }
  }
  cout << min << endl;
  return 0;
}