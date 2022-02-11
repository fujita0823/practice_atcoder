#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int> a(n),b(n);
  for(int i=0; i<n; i++) cin>>a[i]>>b[i];
  int amin=100000,bmin=100000,aidx=n,bidx=n;
  for(int i=0; i<n; i++){
    if(a[i]<amin){ amin=a[i]; aidx = i;}
    if(b[i]<bmin){ bmin=b[i]; bidx = i;}
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  long long ans;
  if(aidx==bidx){
    if(n==1) ans = a[0]+b[0];
    else if(a[0]+b[0] < a[1] && a[0]+b[0] < b[1]){
      ans = a[0]+b[0];
    }
    else{
      int pair1,pair2;
      if(a[0]>b[1]) pair1 = a[0];
      else          pair1 = b[1];
      if(b[0]>a[1]) pair2 = b[0];
      else          pair2 = a[1];
      if(pair1<pair2) ans = pair1;
      else ans = pair2;
    }
  }
  else{
    if(a[0]<b[0]) ans = b[0];
    else          ans = a[0];
  }
  cout << ans << endl;
  
  return 0;
}