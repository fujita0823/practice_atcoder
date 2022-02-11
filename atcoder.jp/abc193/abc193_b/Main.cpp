#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,p,x,min; cin>>n;
  min = 1000000000;
  for(int i=0; i<n; i++){
    cin>>a>>p>>x;
    x -= a;
    if(x>0 && p<min){
      min=p;
    }
  }
  if(min==1000000000) min=-1;
  cout << min << endl;
}