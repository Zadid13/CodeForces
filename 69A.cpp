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

    ll n;
    cin >> n;
    vector<ll> xforces, yforces, zforces;
    ll x, y, z;
    xforces.reserve(n);
    yforces.reserve(n);
    zforces.reserve(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        xforces.pb(x);
        yforces.pb(y);
        zforces.pb(z);
    }

    ll xsum(0), ysum(0), zsum(0);

    for (ll i = 0; i < n; i++)
    {
        xsum += xforces[i];
        ysum += yforces[i];
        zsum += zforces[i];
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
