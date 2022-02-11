#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n; cin >> n;
  int al=26;
  list<int> a;
  while(n>0){
    int head;
    if(n%26==0) head=al;
    else        head=n%al;
    a.push_front(head);
    n = (n-head)/al;
  }
  for(list<int>::iterator i=a.begin(); i!= a.end(); i++){
    cout << (char)(96+*i);
  }
  cout << endl;
  return 0;
}