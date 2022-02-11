#include <bits/stdc++.h>
using namespace std;


void swap1(string& s, int a, int b, int N, int rev){
  if(rev){
    if(a>N) a -= N;
    else    a += N;
    if(b>N) b -= N;
    else    b += N;
    //cout << a << " " << b << endl;
    swap(s[a-1],s[b-1]);
  } 
  else swap(s[a-1],s[b-1]);
}

void swap2(string& s, int N){
  string l=s.substr(0,N);
  string r=s.substr(N);
  s = r+l;
}

int main(){
  int N,Q; cin>>N;
  string S; cin>>S; cin>>Q;
  int a,b,t, rev=0;
  for(int i=0; i<Q; i++){
    cin>>t>>a>>b;
    if(t==1) swap1(S,a,b,N,rev);
    else if(t==2){
      if(rev) rev=0;
      else    rev=1;
    }
    //cout << S << endl;
  }
  if(rev) swap2(S,N);
  cout << S << endl;
  return 0;
}