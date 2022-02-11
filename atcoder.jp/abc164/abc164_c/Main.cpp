#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  unordered_set<string> s;
  string t;
  for(int i=0; i<n; i++){
    cin >> t;
    s.insert(t);
  }
  cout << s.size() << endl;
  return 0;
}