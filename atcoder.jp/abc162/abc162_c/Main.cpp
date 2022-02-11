#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
  if (x==y) return x;
  if (x>y) return gcd(x-y,y);
  else return gcd(x,y-x);
}


int main(){
  int n; cin>>n;
  long long sum=0;
  for(int i=1; i<n+1; i++){
    for(int j=1; j<n+1; j++){
      for(int k=1; k<n+1; k++){
        sum += gcd(i,gcd(j,k));
      }
    }
  }
  cout << sum << endl;
  return 0;
}