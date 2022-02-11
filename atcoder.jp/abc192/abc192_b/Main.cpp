#include<bits/stdc++.h>
using namespace std;

int main(){
  string x; cin >> x; int t;
  for(int i=0; i<x.length(); i++){
    t = (int)x[i];
    if (i%2==0){
      if (!(t>96 && t<123)) break;
    }
    else{
      if (!(t>64 && t<91)) break;
    }
    if (i==x.length()-1){
      cout << "Yes" << endl; return 0;
    }
  }
  cout << "No" << endl; return 0;
}