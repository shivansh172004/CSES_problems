#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>arrival_time(n);
  vector<int>leaving_time(n);
  for(int i=0; i<n; i++){
    cin >> arrival_time[i];
    cin >> leaving_time[i];
  }
  sort(arrival_time.begin(), arrival_time.end());
  sort(leaving_time.begin(), leaving_time.end());

  int i=0, j=0;
  int current = 0, max_customer = 0;
  while(i<n && j<n){
    if(arrival_time[i] < leaving_time[j]){
      current++;
      max_customer = max(max_customer, current);
      i++;
    } else{
     current--;
     j++;
    }
  }
  cout << max_customer << endl;

  return 0;
}