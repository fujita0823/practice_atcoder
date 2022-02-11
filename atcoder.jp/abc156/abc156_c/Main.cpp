#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  int min=2000000;
  for(int i=1; i<101; i++){
    int t=0;
    for(int j=0; j<n; j++){
      t+= (a[j]-i)*(a[j]-i);
    }
    if(t<min) min=t;
  }
  cout << min << endl;
  return 0;
}