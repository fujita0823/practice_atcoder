#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin>>n;
  vector<int> s;
  string t;
  for(int i=0; i<n; i++){
    cin>>t;
    if(t=="OR")        s.push_back(0);
    else if (t=="AND") s.push_back(1);
    else cout << "Err" << endl;
  }
  ll cnt=0;
  while(s.size()>0){
    if(!s[s.size()-1]){
      cnt+= (ll)1<<s.size();
    }
    s.pop_back();
  }
  cnt++;
  cout << cnt << endl;
  return 0;
}