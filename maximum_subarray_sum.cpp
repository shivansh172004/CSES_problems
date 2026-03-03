#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long>arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // kadane algorithm lgayenge isme
  // main crux is -> current_sum = max(arr[i], current_sum + arr[i])
  long long current_sum = arr[0];
  long long max_sum = arr[0];
  for(int i=1; i<n; i++){
    current_sum = max(arr[i], current_sum + arr[i]);
    max_sum = max(max_sum, current_sum);
  }
  cout << max_sum << endl;

  return 0;
}