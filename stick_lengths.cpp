#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    long long cost = 0;
    long long median = arr[n/2];
    for(int i=0; i<n; i++){
      cost += abs(arr[i] - median);
    }
   cout << cost << endl;

    return 0;
}