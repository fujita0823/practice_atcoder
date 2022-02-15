#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int t;
  unordered_set<int> s;
  for(int i=0; i<n; i++){
    cin >> t;
    if(s.find(t) == s.end()){
      s.insert(t);
    }
    else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}