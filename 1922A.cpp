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
        ll n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        bool res(false);
        for (ll p = 0; p < n; p++)
        {
            if (c[p] != a[p] && c[p] != b[p])
            {
                res = true;
                break;
            }
        }
        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}