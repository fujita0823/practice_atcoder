#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(),a.end());
  int d0 = (a[2]-a[0])/2;
  int d1 = (a[2]-a[1])/2;
  int r0 = (a[2]-a[0])%2;
  int r1 = (a[2]-a[1])%2;
  int c;
  if (!(r0^r1)){
    c = d0+d1+r0;
  }
  else{
    c = d0+d1+2;
  } 
  cout << c << endl;
}