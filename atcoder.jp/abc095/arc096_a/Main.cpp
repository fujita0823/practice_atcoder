#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll a,b,c,m,n,val=0;
  cin>>a>>b>>c>>m>>n;
  if(c*2>=a+b){
    val += a*m+b*n;
  }
  else if(2*c>=a && 2*c>=b){
    if(m>n){
      val += c*n*2;
      val += (m-n)*a;
    }
    else{
      val += c*m*2;
      val += (n-m)*b;
    }
  }
  else if(2*c>=a){
    if(m<n) val += c*n*2;
    else{
      val += c*n*2;
      val += (m-n)*a;
    }
  }
  else if(2*c>=b){
    if(n<m) val += c*m*2;
    else{
      val += c*m*2;
      val += (n-m)*b;
    }
  }
  else{
    if(m>n) val+=c*m*2;
    else    val+=c*n*2;
  }
  cout << val << endl;
  return 0;
}