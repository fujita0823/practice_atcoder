#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main(){
  int a,b; cin>>a>>b;
  if(a>b){
    int s=0;
    rep(i,a){
      s +=(i+1);
      cout << i+1 << ' ';
    }
    rep(i,b-1){
      cout << -(i+1) << ' ';
      s -=(i+1);
    }
    cout << -s << endl;
  }
  else{
    int s=0;
    rep(i,b){
      s +=(i+1);
      cout << -(i+1) << ' ';
    }
    rep(i,a-1){
      cout << (i+1) << ' ';
      s -=(i+1);
    }
    cout << s << endl;
  }
  return 0;
}