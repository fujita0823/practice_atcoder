#include<bits/stdc++.h>
using namespace std;

int g1(string x){
  vector<int> r(x.size());
  int i=0,xi=0,zeroc=0;
  for(int i=0; i<x.size(); i++){
    r[i] = (int)x[i] - 48;
  }
  sort(r.begin(),r.end());
  int ans=0;
  for(int i=0; i<x.size(); i++){
    if(r[i]==0) continue;
    ans  = (ans*10)+r[i];
  }
  return ans;
}

int g2(string x){
  vector<int> r(x.size());
  int i=0,xi=0,zeroc=0;
  for(int i=0; i<x.size(); i++){
    r[i] = (int)x[i] - 48;
  }
  sort(r.begin(),r.end());
  reverse(r.begin(),r.end());
  int ans=0;
  for(int i=0; i<x.size(); i++){
    ans  = (ans*10)+r[i];
  }
  return ans;
  return 0;
}

string f(string x){
  int r = g2(x) - g1(x);
  x = to_string(r);
  return x;
}

int main(){
  string ans;
  int k; 
  cin >> ans >> k;
  for(int i=0; i<k; i++) ans = f(ans);
  cout << ans << endl;
}