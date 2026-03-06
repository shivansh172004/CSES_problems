#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
long long MOD = 1e9 + 7;
vector<int>arr(n);
map<int, int>mp;
for(int i=0; i<n; i++){
  cin >> arr[i];
  mp[arr[i]]++;
}

long long total = 1;
for(auto it: mp){
  total *= (it.second + 1);
  total %= MOD;
}
  cout << total-1 << endl;

  return 0;
}