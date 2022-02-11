#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int t, min=0, max=0,cnt=0;
  for(int i=0; i<n; i++){
    cin >> t;
    if(t<=min){
      cnt++;
      min = t;
    }
    else{
      if(cnt>max) max=cnt;
      cnt = 0;
      min = t;
    }
  }
  if(cnt>max) max=cnt;
  cout << max << endl;
  return 0;
}