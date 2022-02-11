#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  string s; cin>>s;
  string a = "Takahashi";
  string b = "Aoki";
  for(int i=0; i<n; i++){
    if(s[i]=='1'){
      if(i%2==0) cout << a << endl;
      else       cout << b << endl;
      break;
    }
  }
  return 0;
}