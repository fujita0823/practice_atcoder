#include <bits/stdc++.h>
using namespace std;

int main(){
  double a,b; cin>>a>>b;
  int al = ceil(a/0.08);
  int ah = floor((a+1)/0.08);
  int bl = ceil(b/0.1);
  int bh = floor((b+1)/0.10);
  //cout << al << ' ' << ah << endl;
  //cout << bl << ' ' << bh << endl;
  if(al < bl){
    if(bl < ah){
      cout << bl << endl;
    }
    else{
      cout << -1 << endl;
    }
  }
  else{
    if(al < bh){
      cout << al << endl;
    }
    else{
      cout << -1 << endl;
    }
  }
  return 0;
}