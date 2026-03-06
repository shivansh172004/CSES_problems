#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // I think isme hum sliding window lgayenge
  // pehle meine isme unordered map lgaya tha, but ek big input mei TLE aya tha
  map<int, int>mp;
  int length = 0;
  int l = 0;
  for(int r=0; r<n; r++){
    mp[arr[r]]++;
    while(mp[arr[r]] > 1){
      mp[arr[l]]--;
      l++;
    }
    length = max(length, r-l+1);
    }

    cout << length << endl;

    return 0;
  }