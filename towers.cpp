#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  // multiset le skte ha
  multiset<int>top;
  for(int i=0; i<n; i++){
    int x;
    cin >> x;

    auto it = top.upper_bound(x);
    if(it != top.end()){
      top.erase(it);
    }
    top.insert(x);
  }
  cout << top.size() << endl;

  return 0;
}