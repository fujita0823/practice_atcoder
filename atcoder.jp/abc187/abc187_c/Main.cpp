#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N; cin >> N; 
  unordered_set<string> s;
  string str;
  for(ll i=0; i<N; i++){
    cin>>str;
    if(s.find(str) == s.end()){
      if(str[0]=='!'){
        if(s.find(str.substr(1)) != s.end()){
        	cout << str.substr(1) << endl;
          	return 0;
        }
      }
      else{
        if(s.find('!'+str) != s.end()){
          cout << str << endl;
          return 0;
        }
      }
      s.insert(str);
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}
