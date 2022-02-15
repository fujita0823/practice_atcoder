#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin>>a[i]; 
  sort(a.begin(),a.end());
  ll two=2;
  double sum=0;
  for(int i=n-1; i>0; i--){
    sum += (double)a[i] / (double)two;
    two *= 2;
  }
  sum += (double)a[0] / (double) (two/2 );
  cout << fixed << setprecision(10) << sum << endl;
  return 0;
}