#include <bits/stdc++.h>
using namespace std;

long double yogen(long double theta, long double a, long double b){
  return sqrt(a*a + b*b -2*a*b*cos(theta));
}

long double time(int h, int m){
  long double PI  = acos(-1);
  long double cho = (long double)m * 6.0;
  long double tan = (long double)h * 30.0 + (long double)m * 0.5;
  if(1==2 && abs(tan-cho) > 180.0) return  PI/180.0 * (abs(tan-cho)-180); 
  else return  PI* (tan-cho)/180.0 ;
}
  

int main(){
  int a,b,h,m; cin >> a >> b >> h >> m;
  long double theta = time(h%12,m%60);
  cout <<fixed << setprecision(15)<< yogen(theta,(long double)a,(long double)b) << endl;
  return 0;
}