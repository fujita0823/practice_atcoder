#include <bits/stdc++.h>
using namespace std;

int main(){
  double r,x,y; cin>>r>>x>>y;
  double d = sqrt(x*x+y*y);
  double c = d/r;
  int ci = (int)c;
  if(ci==0){
    cout << 2 << endl;
  }
  else if((double)ci==c){
    cout << ci << endl;
  }
  else{
    cout << ci+1 << endl;
  }
  return 0;
}