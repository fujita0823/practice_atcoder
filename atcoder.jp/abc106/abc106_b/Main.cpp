#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,res=0; cin >> n;
  for(int i=1; i<n+1; i+=2){
    int cnt=0;
    int h = (int)sqrt((double)i);
    for(int j=1; j<h+1; j+=2){
      if(i%j==0) cnt++;
    }
    if(cnt==4){
      res++;
    }
  }
  cout << res << endl;
  return 0;
}