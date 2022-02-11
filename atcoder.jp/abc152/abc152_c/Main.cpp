#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  int min=n+1, sum=0,t;
  for(int i=0; i<n; i++){
    cin >> t;
    if(t<min){
      min = t;
      sum++;
    }
  }
  cout << sum << endl;
  return 0;
}