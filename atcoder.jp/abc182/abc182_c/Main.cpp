#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int t,sum=0;
  vector<int> a = {0,0,0};
  for(int i=0; i<s.size(); i++){
    t = (s[i]-48)%3;
    a[t]++;
    sum = (sum+t)%3;
  }
  if(sum==0) cout << 0 << endl;
  else{
    if(a[sum] != 0){
      if(s.size()<2) cout << -1 << endl;
      else cout << 1 << endl;
    }
    else{
      if(s.size()<3) cout << -1 << endl;
      else cout << 2 << endl;
      //if(a[(-sum)%3] > 2 || ){
      //cout << 2 << endl;
    }
  }
  return 0;
}