#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long

int main()
{
    optimize();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec;
        vec.reserve(n);
        for (ll i = 0; i < n; i++)
        {
            ll v;
            cin >> v;
            vec.pb(v);
        }
        ll ans = LLONG_MAX;
        for (ll i = 1; i < n; i++)
        {
            if (vec[i] < vec[i - 1])
            {
                ans = 0;
                break;
            }
            ans = min(ans, ((vec[i] - vec[i - 1]) / 2LL) + 1LL);
        }
        cout << ans << endl;
    }

    return 0;
}