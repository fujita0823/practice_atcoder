#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
string s,t,u;
int ssize,tsize,usize;
vector<int> v;
vector<char> w;
vector<int> used(10,0);
int len;

long long to_int(string s, int size_s){
  long long k = pow(10,size_s-1),n=0;
  rep(i,size_s){
    rep(j,len){
      if(s[i]==w[j]){
        if(i==0 && v[j]==0) return 0;
        n += v[j]*k;
        k /= 10;
      }
    }
  }
  return n;
} 

bool check(){
  long long n1=to_int(s,ssize);
  long long n2=to_int(t,tsize);
  long long n3=to_int(u,usize);
  if(n1*n2*n3==0)    return false;
  else if(n1+n2==n3){
    cout << n1 << endl<< n2 << endl<< n3 << endl;
    return true;
  }
  else               return false;
}

bool dfs(int i){
  if(i==len){
    if(check()) return true;
    else return false;
  }
  for(int ki=0; ki<10; ki++){
    if(used[ki]==0){
      used[ki] = 1;
      v.push_back(ki);
      if(dfs(i+1)) return true;
      v.pop_back();
      used[ki] = 0;
    }
  }
  return false;
}

int main(){
  cin>>s>>t>>u;
  ssize = s.size(); tsize = t.size(); usize = u.size();
  set<char> a;
  string err = "UNSOLVABLE";
  rep(i,ssize) a.insert(s[i]);
  rep(i,tsize) a.insert(t[i]);
  rep(i,usize) a.insert(u[i]);
  len = a.size();
  for(auto itr=a.begin(); itr!=a.end(); ++itr) w.push_back(*itr);
  if(len>10){
  	cout << err << endl;
  }
  else{
    if(!dfs(0)) cout << err << endl;;
  }
  return 0;
}