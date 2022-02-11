#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int p=n;
  while(true){
    int prime=1;
    for(int i=2; i<(0.0001+sqrt((double)p)); i++){
      if(p%i==0){ prime=0; break;}
    }
    if(prime){
      cout << p << endl;
      return 0;
    }
    p++;
  }
}