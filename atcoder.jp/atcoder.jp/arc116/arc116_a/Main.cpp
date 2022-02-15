#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N; cin>>N;
  for(int i=0; i<N; i++){
    ll t;
    cin>>t;
    if(t%2==1){
      cout << "Odd" << endl;
    }
    else if(t%4==0){
      cout << "Even" << endl;
    }
    else{
      cout << "Same" << endl;
    }
  }
  return 0;
}