#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin>>n;
  ll cnt=0, tcnt=0;
  vector<string> s(n);
  for(int i=0; i<n; i++){
    cin>>s[i]; 
    sort(s[i].begin(), s[i].end()); 
  }
  sort(s.begin(), s.end());
  string t="";
  for(int i=0; i<n; i++){
    if(s[i] != t){
      t=s[i];
      cnt += tcnt*(tcnt-1)/2;
      tcnt=1;
    }
    else{
      tcnt++;
    }
  }
  cnt += tcnt*(tcnt-1)/2;
  cout << cnt << endl;
  return 0;
}
