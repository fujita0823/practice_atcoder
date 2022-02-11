#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
ll N;

int dfs(string &s){
  ll ret=0;
  char ls[3] = {'3','5','7'};
  if(s!=""){
    if(stoll(s) > N){
      return ret;
    }else{
      for(auto c: ls){
        if(s.find(c) == string::npos) break;
        if(c=='7') ret ++;
      }
    }
  }
  
  for(auto c: ls){
    s.push_back(c);
    ret += dfs(s);
    s.pop_back();
  }
  
  return ret;
}

int main(){
  cin >> N;
  string n = "";
  cout << dfs(n) << endl;
  return 0;
}