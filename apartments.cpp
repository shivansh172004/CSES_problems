#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    vector<int> apartments(m);

    for(int i = 0; i < n; i++){
        cin >> applicants[i];
    }

    for(int i = 0; i < m; i++){
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int i = 0, j = 0;
    int cnt = 0;

    while(i < n && j < m){
        if(abs(applicants[i] - apartments[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(apartments[j] < applicants[i] - k){
            j++;
        }
        else{
            i++;
        }
    }

    cout << cnt << "\n";
    return 0;
}