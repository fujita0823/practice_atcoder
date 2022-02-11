#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int result=1;
  // ここにプログラムを追記
  for(int i=1; i<S.size()-1; i+=2){
    if(S.at(i)=='+') result++;
    else if(S.at(i)=='-') result--;
    else result = 100;
  }
  cout << result << endl;
}
