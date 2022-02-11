#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin>>n;
  int max,a,b;
  ll sum=0;
  for(int i=0; i<n; i++){
    cin >> a;
    if(i==0){
      max = a;
      b=0;
    }
    else{
      if(a<max){
        b = max-a;
      }
      else{
        max = a;
        b = 0;
      }
    }
    sum += b;
  }
  cout << sum << endl;
  return 0;
}