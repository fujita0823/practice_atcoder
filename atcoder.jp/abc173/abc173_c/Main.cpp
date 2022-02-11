#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,k; cin>> h>>w>>k;
  char t;
  vector<vector<int>> a(h,vector<int>(w));
  
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cin >> t;
      if(t=='#') a[i][j] = 1;
      else       a[i][j] = 0;
    }
  }
  int ans=0;
  for(int i=0; i<1<<(h+w); i++){
    int sum=0;
    for(int r=0; r<h; r++){
      for(int c=0; c<w; c++){
        int x = (i&1<<(w+r))>>r;
        int y = (i&1<<c)>>c;
        if(!(x||y)) sum += a[r][c];
      }
    }
    //cout << "sum " << sum << endl;
    if(sum==k) ans++;
  }   
  
  cout << ans << endl;
  return 0;
}