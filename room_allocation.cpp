#include<bits/stdc++.h>
using namespace std;

int main(){
  multiset<pair<int, int>>m;
  int n;
  cin >> n;
  vector<tuple<int, int, int>>arr(n);
  for(int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    arr[i] = make_tuple(a, b, i);
  }
  vector<int>rooms(n);
  int cnt = 0;
  sort(arr.begin(), arr.end());
  for(int i=0; i<n; i++){
    auto[arrival, departure, idx] = arr[i];
    if(!m.empty() && m.begin()->first < arrival){
      rooms[idx] = m.begin()->second;
      m.erase(m.begin());
      m.insert({departure, rooms[idx]});
    } else{
      rooms[idx] = ++cnt;
      m.insert({departure, rooms[idx]});
    }
  }
  cout << cnt << "\n";
  for(int i=0; i<n; i++){
    cout << rooms[i] << " \n"[i==n-1];
  }
  return 0;
}