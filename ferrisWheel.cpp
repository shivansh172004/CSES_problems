#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, x;
  cin >> n >> x;
  vector<int>children_weight(n);
  for(int i=0; i<n; i++){
    cin >> children_weight[i];
  }
  sort(children_weight.begin(), children_weight.end());

  int i=0, j=n-1;
  int cnt = 0;
  while(i<=j){
    if(children_weight[i] + children_weight[j] <= x){
      i++;
    } 
      j--;
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}