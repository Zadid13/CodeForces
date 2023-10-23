#include <bits/stdc++.h>
using namespace std;
#define fast_io()                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long

int main()
{
    fast_io();
    ll x;
    ll n = 1000000;
    bool mark[1000001] = {false};

    for (ll i = 2; i <= n; i++) {
        if (mark[i] == false) {
            for (int j = 2 * i; j <= n; j += i) {
                mark[j] = true;
            }
        }
    }

    while (cin >> x) {
        for (ll i = 4; i <= x - 4; i++) {
            if (mark[i] && mark[x - i]) {
                cout << i << " " << x - i << endl;
                break;
            }
        }
    }

    return 0;
}