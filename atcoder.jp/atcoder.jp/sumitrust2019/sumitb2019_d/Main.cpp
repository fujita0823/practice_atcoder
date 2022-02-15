#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; string s;
  cin>>n>>s;
  int cnt=0;
  for(int i=0; i<1000; i++){
    int a=i/100, b=(i-a*100)/10, c=i%10, f=0;
    for(int j=0; j<n; j++){
      if(s[j]==a+'0' && f==0){f=1; }
      else if(s[j]==b+'0' && f==1){f=2;}
      else if(s[j]==c+'0' && f==2){
        f=3; break;
      }
    }
    if(f==3) cnt++;
  }
  cout << cnt << endl;
  return 0;
}