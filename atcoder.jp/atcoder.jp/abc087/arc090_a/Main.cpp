#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int sum=0,diff=0,dmax=0;
  vector<vector<int>> a(2,vector<int>(n));
  for(int i=0; i<n; i++) cin >> a.at(0).at(i);
  for(int i=0; i<n; i++) cin >> a.at(1).at(i);
  for(int i=0; i<n; i++) sum += a.at(1).at(i);
  sum += a.at(0).at(0);
  
  for(int i=1; i<n; i++){
    diff += a.at(0).at(i) - a.at(1).at(i-1);
    if (diff > dmax){
      dmax = diff;
    }
  }
  cout << sum+dmax <<endl;
}