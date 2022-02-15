#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll a,b,c,d; cin>>a>>b>>c>>d;
  if(a==c && b==d){
    cout << 0 << endl;
  }
  else if(a+b == c+d || a-b == c-d){
    cout << 1 << endl;
  }
  else if(abs(a-c)+abs(b-d)<=3){
    cout << 1 << endl;
  }
  else if(abs(a-c)+abs(b-d)<=6){
    cout << 2 << endl;
  }
  else if( (a+b)%2 == (c+d)%2 || abs(a-b)%2==abs(c-d)%2){
    cout << 2 << endl;
  }
  else{
    int b1= ((a+b+1)==(c+d) || (a+b-1)==(c+d) ||(a+b+3)==(c+d) || (a+b-3)==(c+d) );
    int b2= ((a-b+1)==(c-d) || (a-b-1)==(c-d) ||(a-b+3)==(c-d) || (a-b-3)==(c-d) );
    if(b1||b2){
      cout << 2 << endl;
    }
    else{
      cout << 3 << endl;
    }
  }
  return 0;
}