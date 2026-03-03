#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long x;
  cin >> n >> x;
  vector<pair<long long, int>>arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i].first;
    arr[i].second = i+1;
  }
  sort(arr.begin(), arr.end());
  int i = 0, j = n-1;
  while(i<j){
    long long sum = arr[i].first + arr[j].first;
    if(sum == x){
      cout << arr[i].second << " " << arr[j].second << endl;
      return 0;
    }
    else if(sum < x){
      i++;
    } else{
      j--;
    }
  } 
  cout << "IMPOSSIBLE" << endl;

  return 0;
}