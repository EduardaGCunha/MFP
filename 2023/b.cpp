#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
#define int long long

signed main(){
    fastio;
    int n; cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int l = 0, r = n-1;
    int m = 0;
    while(l <= r){
        int s = (arr[l] + arr[r])/2;
        m = max(s, m);
        l++, r--;
    }
    cout << m << endl;
}