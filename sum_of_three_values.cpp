#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<pair<long long, int>> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = i + 1; // store 1-indexed original position
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < n - 2; i++){
        int lo = i + 1, hi = n - 1;
        while(lo < hi){
            long long sum = arr[i].first + arr[lo].first + arr[hi].first;
            if(sum == x){
                cout << arr[i].second << " " << arr[lo].second << " " << arr[hi].second << "\n";
                return 0;
            } else if(sum < x) lo++;
            else hi--;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}