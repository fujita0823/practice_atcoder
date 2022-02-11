#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N; cin>>N;
  vector<int> score1(N,0), score2(N,0);
  int c,p;
  for(int i=0; i<N; i++){
    cin>>c>>p;
    if(c==1){
      score1[i] = p;
      score2[i] = 0;
    }
    else{
      score1[i] = 0;
      score2[i] = p;
    }
  }
  for(int i=0; i<N-1; i++){
    score1[i+1] += score1[i];
    score2[i+1] += score2[i];
  }
  int Q; cin>>Q;
  int l,r;
  for(int i=0; i<Q; i++){
    cin>>l>>r;
    r -= 1;
    l -= 2;
    if(l<0) cout << score1[r] << " "<<score2[r]<<endl;
    else    cout << score1[r]-score1[l] << " " << score2[r]-score2[l] << endl;
  }
  return 0;
}
