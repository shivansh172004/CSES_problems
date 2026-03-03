#include<bits/stdc++.h>
using namespace std;

int main(){
int n, m;
cin >>n >> m;
multiset<int> prices;
for(int i=0; i<n; i++){
  int p;
  cin >> p;
  prices.insert(p);
}

for(int i=0; i<m; i++){
  int th;
  cin >> th;
  auto it = prices.upper_bound(th);
  if(it == prices.begin()){
    cout << "-1" << endl;
  }
  else {
    it--;
    cout << (*it) << endl;
    prices.erase(it);
  }
}
  return 0;
}