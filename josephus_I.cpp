#include<bits/stdc++.h>
using namespace std;

void josephus(vector<int>& arr){
    int n = arr.size();
    if(n == 1){
        cout << arr[0] << endl;
        return;
    }

    // Eliminate every 2nd person (1-indexed: positions 2,4,6,...)
    for(int i = 1; i < n; i += 2)
        cout << arr[i] << endl;

    vector<int> narr;

    if(n % 2 == 0){
        // No rotation needed
        for(int i = 0; i < n; i += 2)
            narr.push_back(arr[i]);
    } else {
        // Odd: last survivor wraps, so arr[0] is eliminated next
        // Rotate: arr[0] goes to end
        narr.push_back(arr[n-1]);
        for(int i = 0; i < n-1; i += 2)
            narr.push_back(arr[i]);
    }

    josephus(narr);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        arr[i] = i + 1;

    josephus(arr);
    return 0;
}