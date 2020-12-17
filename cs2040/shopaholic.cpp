#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool cmp(int b1,int b2){
    return b1>b2;
}

void solve() {
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n, cmp);
    int idx=0;
    ll price=0;
    while(idx<n){
        if(idx+2<n){
            price+=arr[idx+2];
        }
        idx+=3;
    }
    cout<<price<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}