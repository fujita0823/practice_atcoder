#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,X; cin>>N>>X;
  int sum=0;
  for(int i=0; i<N; i++){
    int t;
    cin>>t;
    if(i%2==0) sum+=t;
    else       sum+=t-1;
  }
  if(sum>X) cout<<"No"<<endl;
  else      cout<<"Yes"<<endl;
  return 0;
}