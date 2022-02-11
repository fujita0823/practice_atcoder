#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n,k; cin>>n>>k;
  vector<vector<int>> a(n,vector<int>(n));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> a[i][j];
    }
  }
  if(n==2){
    cout << (a[0][1]*2 == k) << endl;
    return 0;
  }
  
  int c=1,i=0,cnt=0;
  for(int i=0; i<n; i++) c*= (i+1);
  c/=2;
  vector<int> p(n);
  for(int i=0; i<n; i++) p[i] = i;
  
  do{
    if(i==c) break;
    int s=0;
    for(int j=0; j<n; j++){
      //cout << p[j] << ',' << p[(j+1)%n] << ' ' << a[p[j]][p[(j+1)%n]] << endl;
      s += a[p[j]][p[(j+1)%n]];
    }
    //cout << s<< endl;
    if(s==k) cnt++;
    i++;
  }
  while(next_permutation(p.begin()+1,p.end()));
  
  cout << cnt << endl;
  return 0;
}