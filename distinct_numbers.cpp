#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  set<long long>st;
  while(n--){
     long long x;
    cin >> x;
    st.insert(x);
  }
  cout << st.size() << endl;

return 0;
}
// pehle meine isme unordered_set (hash collision worse case) use kra tha, kyuki uski complexity O(1) hoti ha, but isme last test case TLE aa rha tha,
// for 200000 it fails, so I used only set