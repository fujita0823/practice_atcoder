#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int max=0,t;
  for(int i=0; i<n; i++){
    cin >> t;
    if(t>max){
      max = t;
    }
    else if(t < max-1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}