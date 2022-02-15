#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int L; cin>>L;
  ll a = 1;
  for(int i=1; i<12; i++){
    a *= (L-i);
    a /= i;
  }
  cout << a << endl;
  return 0;
}
  