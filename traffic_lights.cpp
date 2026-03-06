#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, n;
    cin >> x >> n;
    
    set<int> lights;
    multiset<int> gaps;
    
    // Sentinels: road goes from 0 to x
    lights.insert(0);
    lights.insert(x);
    gaps.insert(x);  // initial gap is the whole road
    
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        
        // Find neighbors
        auto it = lights.upper_bound(p);  // first element > p
        int right = *it;
        --it;
        int left = *it;                   // first element < p
        
        // Remove old gap, add two new gaps
        gaps.erase(gaps.find(right - left));
        gaps.insert(p - left);
        gaps.insert(right - p);
        
        lights.insert(p);
        
        // Max gap is the last element
        cout << *gaps.rbegin() << " \n"[i == n-1];
    }
    
    return 0;
}