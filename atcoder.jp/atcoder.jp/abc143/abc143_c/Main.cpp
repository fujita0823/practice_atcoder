#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  char t,old='0';
  int cnt=0;
  for(int i=0; i<n; i++){
    cin >> t;
    if(t != old){
      cnt++;
      old = t;
    }
  }
  cout << cnt << endl;
  return 0;
}