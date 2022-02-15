#include <bits/stdc++.h>
using namespace std;

int weight(int n){
  int a=0;
  while(n>0){
    a = (a^ (n&1));
    n = n>>1;
  }
  return a;
}

int main(){
  int n, m; cin >> n >> m;
  int k[m];
  int mask[m];
  int p[m];
  int tmp;
  for(int i=0; i<m; i++){
    cin >> k[i];
    mask[i] = 0;
    for(int j=0; j<k[i]; j++){
      cin >> tmp;
      mask[i] += (1<<(tmp-1));
    }
  }
  for(int i=0; i<m; i++){
    cin >> p[i];
  }
  int cnt=0;
  for(int bits=0; bits<(1<<(n)); bits++){
    for(int i=0; i<m; i++){
      if(weight(mask[i]^(mask[i] & bits)) != p[i]) break;
      if(i==m-1) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}