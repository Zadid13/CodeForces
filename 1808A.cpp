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
    ll t;
    cin >> t;
    while (t--)
    {

        ll l, r;
        cin >> l >> r;
        map<ll, ll> ans; 
        for (ll i = l; i <= min(r, l + 90); ++i)
        {
            ll now = i;
            ll mx = -1ll, mn = LLONG_MAX; 
            while (now)
            {
                mx = max(mx, now % 10);
                mn = min(mn, now % 10);
                now /= 10;
            }
            ans[mx - mn] = i;
        }
        for (ll i = 9; i >= 0; --i)
        {
            if (ans[i])
            {
                cout << ans[i] << endl;
                break;
            }
        }
    }
    return 0;
}
