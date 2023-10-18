#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define fi first
#define sc second
#define ll long long

int binarysearch(ll arr[], ll size, ll key) {
    ll start = 0;
    ll end = size - 1;
    ll mid = (start + end) / 2;
    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

ll factorial(ll n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    fast_io();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sum = 0, v = 0;
        ll arr[n], p = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        for (ll i = 1; i < n; i++) {
            if (arr[i - 1] == -1 && arr[i] == -1) {
                v = 1;
                break;
            } else if (arr[i] == -1 || arr[i - 1] == -1) {
                p = 1;
            } else {
                v = 0;
            }
        }
        if (v == 1) {
            cout << sum + 4 << endl;
        } else if (p == 0) {
            cout << sum - 4 << endl;
        } else {
            cout << sum << endl;
        }
    }
    return 0;
}
