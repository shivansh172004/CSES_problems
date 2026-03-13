#include <bits/stdc++.h>
using namespace std;

int n, target;
vector<long long> times;

// Check if we can make 'target' products within 'timeLimit' seconds
bool canFinish(long long timeLimit) {
    long long totalProducts = 0;

    for (int i = 0; i < n; i++) {
        // Each machine makes floor(timeLimit / times[i]) products
        totalProducts += timeLimit / times[i];

        // Early exit: no need to count further if we already have enough
        if (totalProducts >= target) return true;
    }

    return false;
}

int main() {
    cin >> n >> target;

    times.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i];
    }

    // Binary search on the answer (time)
    long long lo = 1;
    long long hi = *min_element(times.begin(), times.end()) * target; // worst case: slowest machine does everything... actually fastest machine does all
    long long answer = hi;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2; // safe midpoint (avoids overflow)

        if (canFinish(mid)) {
            answer = mid;  // mid works, try smaller
            hi = mid - 1;
        } else {
            lo = mid + 1; // mid too small, try bigger
        }
    }

    cout << answer << endl;
    return 0;
}