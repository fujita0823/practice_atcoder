#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin>>s;
  reverse(s.begin(),s.end());
  int t = stoi(s);
  s = to_string(t);
  string a = s;
  reverse(s.begin(),s.end());
  if(a==s) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}