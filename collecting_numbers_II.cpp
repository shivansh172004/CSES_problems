#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int>pos(n+1), arr(n+1);
  for(int i=1; i<=n; i++){
    int x;
    cin >> x;
    arr[i] = x;
    pos[x] = i;
  }
  int count = 1;
  for(int i=1; i<n; i++){
    if(pos[i] > pos[i+1]){
      count ++;
    }
  }

  while(m--){
    int x, y;
    cin >> x >> y;
    int vx = arr[x], vy = arr[y];

    set<int> check = {vx-1, vx, vy-1, vy};

    for(auto it: check){
      if(it>=1 && it<n){
        if(pos[it] > pos[it+1]) count--;
      }
    }
    swap(arr[x], arr[y]);
    swap(pos[vx], pos[vy]);

    for(auto it: check){
      if(it>=1 && it<n){
        if(pos[it] > pos[it+1]) count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}