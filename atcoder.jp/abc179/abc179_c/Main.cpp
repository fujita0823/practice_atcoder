#include <bits/stdc++.h>
using namespace std;

int div(int n){
  int cnt=0;
  for(int a=1; a<1+(int)sqrt((double)n); a++){
    if (n%a ==0 ){
      if(a != n/a) cnt+=2;
      else cnt++;
    }
  }
  return cnt;
}

int main(){
  int n,cnt=0; cin >> n;
  for(int c=1; c<n; c++){
    cnt += div(n-c);
  }
  cout << cnt << endl;
  return 0;
}