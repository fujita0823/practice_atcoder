#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cling(vector<int> x, vector<int> y, int o,int n){
  int f=1;
  for(int i=0; i<n; i++){
    if(i==o) continue;
    x[i] -= x[o]; y[i] -=y[o];
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      if(i==o || j==o ) continue;
    //  cout << x[i] << "," << y[i] << " " << x[j] << "," << y[j] << endl;
      if(i != j && x[i]*y[j] == x[j]*y[i]) f=0;
    }
  }
  return f;
}

int main(){
  int n; cin >>n;
  vector<int> x(n), y(n);
  for(int i=0; i<n; i++){
    cin >> x[i] >> y[i];
  }
  for(int i=0; i<n; i++){
    if(cling(x,y,i,n)==0){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
  