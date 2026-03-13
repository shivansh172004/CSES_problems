// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n, x;
//   cin >> n >> x;
//   vector<pair<long long, int>>arr(n);
//   for(int i=0; i<n; i++){
//     cin >> arr[i].first;
//     arr[i].second = i+1;
//   }
//   sort(arr.begin(), arr.end());
  
//   for(long long i=0; i<n-2; i++){
//     for(long long j=i+1; j<=n-2; j++){
//       long long left = j+1, right = n-1;
//       while(left < right){
//       long long sum = arr[i].first + arr[j].first + arr[left].first + arr[right].first;
//       if(sum == x){
//         cout << arr[i].second << " " << arr[j].second << " " << arr[left].second << " " << arr[right].second << "\n";
//       } else if(sum<x) left++;
//       else right--;
//     }
//     }
//   }
//   cout << "IMPOSSIBLE" << "\n";

//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x;
    cin >> n >> x;
    
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    map<long long, pair<int,int>> mp;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            long long sum = arr[i] + arr[j];
            if(mp.find(x - sum) != mp.end()){
                auto [a, b] = mp[x - sum];
                if(a != i && a != j && b != i && b != j){
                    cout << a+1 << " " << b+1 << " " << i+1 << " " << j+1 << "\n";
                    return 0;
                }
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = {i, j};
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}