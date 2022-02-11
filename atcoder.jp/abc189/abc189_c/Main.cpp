#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  ll ssize = a[0];
  for(int i=0; i<n; i++){
    int min=a[i];
    for(int j=i; j<n; j++){
      if(min > a[j]){
        min=a[j];
      }
      if((j-i+1)*min > ssize){
        ssize = (j-i+1)*min;
        //cout << ssize << endl;
      }
    }
  }
  cout << ssize << endl;
  
  /*
  vector<bool> b(n,1);
  vector<int> c(n);
  for(int i=0; i<n; i++){
    cin >> a[i]; c[i]=a[i];
    for(int j=0; j<i; j++){
      if (b[i]){
        if (a[i]>=a[j]) c[j]+=a[j];
        else b[j] = 0; 
      }
    }
  }
  int max=0;
  for(int i=0; i<n; i++){
    if(max<c[i]) max = c[i];
  }
  cout << max << endl;
  */
  
  return 0;
}