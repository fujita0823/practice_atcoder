#include <bits/stdc++.h>
using namespace std;

int main(){
  string in; cin>>in;
  int len=0,max=0;
  for(int i=0; i<in.size(); i++){
    if(in[i] == 'A' || in[i] == 'T' || in[i] == 'G' || in[i] == 'C'){
      len++;
    }
    else{
      if(len>max) max=len;
      len=0;
    }
  }
  if(len>max) max=len;
  cout << max << endl;
  return 0;
}