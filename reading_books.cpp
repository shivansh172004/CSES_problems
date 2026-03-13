#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  long long sum = 0, largest = 0;
  for(int i=0; i<n; i++){
    long long t;
    cin >> t;
    sum += t;
    largest = max(largest, t);
  }
  cout << max(2*largest, sum);

   return 0;
}