#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double calc(int n, int k){
  double r = (double)k/(double)n;
  return 1/(1-r);
}

int main(){
  int n;  cin >> n;
  double ans=0;
  for(int i=n-1; i>0; i--){
    ans += calc(n,i);
  }
  cout << fixed << setprecision(15) <<  ans << endl;
  return 0;
}