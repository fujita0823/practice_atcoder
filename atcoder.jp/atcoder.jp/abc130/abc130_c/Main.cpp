#include <bits/stdc++.h>
using namespace std;

int main(){
  int w,h,x,y; cin>>w>>h>>x>>y;
  cout << fixed << setprecision(15) << (double)w*(double)h/2.0 << ' ';
  if(w == x+x && h == y+y) cout << 1 << endl;
  else cout << 0 << endl;
  return 0;
}