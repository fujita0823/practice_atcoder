#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<tuple<string,int,int>> rests(n);
  for(int i=0; i<n; i++){
    cin >> get<0>(rests.at(i));
    cin >> get<1>(rests.at(i));
    get<1>(rests.at(i)) *= -1;
    get<2>(rests.at(i)) = i+1;
  }
  sort(rests.begin(), rests.end());
  for(int i=0; i<n; i++){
    cout << get<2>(rests.at(i)) <<endl;
  }
}
