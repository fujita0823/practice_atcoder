#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, m ; cin >> n >> m;
  vector<int> h(n),score(n,1);
  int sum=0, a,b;
  for(int i=0; i<n; i++) cin >> h[i];
  for(int i=0; i<m; i++){
    cin >> a>> b;
    if(h[a-1]<h[b-1]) score[a-1]=0;
    else if(h[a-1]>h[b-1]) score[b-1]=0;
    else{
      score[b-1]=0; score[a-1]=0;
    }
  }
  for(int i=0; i<n; i++) sum+= score[i];
  cout << sum << endl;
  return 0;
}