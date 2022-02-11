#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int cur,old,sum=0;
  cin>>old;
  sum+=old;
  for(int i=1; i<n-1; i++){
    cin >> cur;
    if(cur<old) sum+= cur;
    else sum+= old;
    old = cur;
  }
  sum+= old;
  cout << sum << endl;
}