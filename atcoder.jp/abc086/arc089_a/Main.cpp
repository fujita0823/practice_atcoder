#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int t=0,old_t=0,x=0,old_x=0,y=0,old_y=0,limt,dist;
  for(int i=0; i<n; i++){
    cin >> t >> x >> y;
    limt = t - old_t;
    dist = abs(x-old_x) + abs(y-old_y);
    if (limt < dist || abs(dist-limt)%2==1){
      cout << "No" << endl; return 0;
    }
    old_t = t; old_x = x, old_y =y;
  }
  cout <<"Yes" << endl;
}