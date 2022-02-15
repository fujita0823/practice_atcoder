#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int> z(n),x(n),y(n);
  for(int i=0; i<n; i++) z[i]=i+1;
  for(int i=0; i<n; i++) cin >> x[i];
  for(int i=0; i<n; i++) cin >> y[i];
  int a,b,cnt=0;
  do{
    if(x==z) a=cnt;
    if(y==z) b = cnt;
    cnt++;
  }while(next_permutation(z.begin(),z.end()));
  
  cout << abs(a-b) << endl;
  return 0;
}