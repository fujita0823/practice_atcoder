#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,n; cin>>x>>n;
  if(n==0){
    cout << x << endl; return 0;
  }
  unordered_set<int> a;
  int d=1,t;
  for(int i=0; i<n; i++){
    cin>>t; a.insert(t);
  }
  if(a.find(x)==a.end()){
    cout << x << endl; return 0;
  }
  while(true){
    x-=1*d;
    if(a.find(x) == a.end()){
      cout << x << endl; return 0;
    }
    x+=2*d;
    if(a.find(x) == a.end()){
      cout << x << endl; return 0;
    }
    x-=1*d;
    d++;
  }
  return 0;
}