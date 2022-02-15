#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n; cin>>n;
  ll a = n, b=0, c=n, min=n;
  while(true){
    if(a==0) break;
    //cout << 'A' << a << 'B' << b << 'C' << c << endl;
    //cout <<"min=" << min << endl;
    a = a >> 1;
    b = b + 1;
    c = n - (a<<b);
    assert(n==a*pow(2,b)+c);
    if(a+b+c<min){
      min=a+c+b;
    }
  }
  cout << min << endl;
  return 0;
}