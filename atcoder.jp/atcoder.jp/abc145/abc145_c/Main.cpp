#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double dist(int x1,int y1, int x2, int y2){
  double dx = (double)abs(x2-x1);
  double dy = (double)abs(y2-y1);
  return sqrt(dx*dx + dy*dy);
}

int main(){
  int n; cin>>n;
  double d=0;
  vector<vector<int>> a(n,vector<int>(2));
  for(int i=0; i<n; i++){
    cin >> a[i][0] >> a[i][1] ;
    for(int j=0; j<i; j++){
      d += dist(a[i][0],a[i][1], a[j][0], a[j][1]);
    }
  }
  
  cout << fixed << setprecision(15) << d*2.0/(double) n << endl;
  return 0;
}
      
  
