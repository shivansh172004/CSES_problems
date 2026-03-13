#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<long, long long>>tasks(n);
  for(auto& [d, dl]: tasks){
    cin >> d >> dl;
  }

  sort(tasks.begin(), tasks.end());

  long long ans = 0, currentTime = 0;
  for(auto&[duration, deadline]: tasks){
    currentTime += duration;
    ans += deadline - currentTime;
  }
  cout << ans << endl;

  return 0;
}