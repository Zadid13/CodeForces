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
            ll c;
            cin >> c;
            vec.pb(c);
        }
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (vec[i] > vec[i + 1])
            {
                ans = max(ans, vec[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}