#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,
__gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define len(x) int((x).size())

int main(){
    int n, k;
    cin >> n >> k;
    ordered_set nums;

    // Insert all elements first
    for(int i = 1; i <= n; i++)
        nums.insert(i);

    // Then run the Josephus elimination
    int pos = 0;
    while(!nums.empty()){
        pos = (pos + k) % nums.size();
        auto it = nums.find_by_order(pos);
        cout << *it << "\n";
        nums.erase(it);
    }

    return 0;
}