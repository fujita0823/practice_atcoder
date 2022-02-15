#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,n; cin>>k>>n;
  vector<int> a(n);
  cin>> a[0];
  int sum=0, max=0;
  for(int i=1; i<n; i++){
    cin>> a[i];
    sum += a[i]-a[i-1];
    if(a[i]-a[i-1] > max){
      max = a[i]-a[i-1];
    }
  }
  sum += a[0]+k-a[n-1];
  if(a[0]+k-a[n-1]>max) max = a[0]+k-a[n-1];
  
  cout << sum-max << endl;
  return 0;
}
  
  