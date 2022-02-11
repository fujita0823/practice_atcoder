#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  map <string, int> m;
  string t; int max=1;
  for(int i=0; i<n; i++){
    cin >> t;
    if(m.find(t) != m.end()){
      m[t]++;
      if(m[t]>max) max=m[t];
    }
    else{
    	m.insert(make_pair(t,1));
    }
  }
  for(auto [key,value] : m){
    if(value == max) cout << key << endl;
  }
  return 0;
}