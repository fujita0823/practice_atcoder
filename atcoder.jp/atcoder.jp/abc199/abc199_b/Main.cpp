#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin>>N;
  vector<int> A(N), B(N);
  for(int i=0; i<N; i++) cin>>A[i];
  for(int i=0; i<N; i++) cin>>B[i];
  int a = *max_element(A.begin(),A.end());
  int b = *min_element(B.begin(),B.end());
  if (b-a+1>0) cout << b-a+1 << endl;
  else cout << 0 << endl;
  return 0;
}