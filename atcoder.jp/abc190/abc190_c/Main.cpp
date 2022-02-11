#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,k; cin >> n >> m;
  vector<vector<int>> a(m,vector<int>(2));
  for(int i=0; i<m; i++) cin >> a[i][0] >> a[i][1];
  cin >> k;
  vector<vector<int>> c(k,vector<int>(2));
  for(int i=0; i<k; i++) cin >> c[i][0] >> c[i][1];
  
  vector<int> ball(n,0);
  int b,cnt=0,max=0;
  for(int i=0; i<(1<<k); i++){
    for(int j=0; j<k; j++){
      b = (i & (1<<j))>>j;
      //out << c[j][b] << " ";
      ball[c[j][b]-1]=1;
    }
    //cout << endl;
    for(int t=0; t<m; t++){
      //ut << ball[a[t][0]-1] << " " << ball[a[t][1]-1] << endl;
      if(ball[a[t][0]-1]>0 && ball[a[t][1]-1]>0) cnt++;
    }
    //cout <<cnt << endl;
    if(cnt>max) max=cnt;
    for(int j=0; j<n; j++) ball[j]=0;
    cnt=0;
  }
  cout << max << endl;
  return 0;
}
  