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
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n);
        ll net = 0;
        for (auto &i : vec)
        {
            cin >> i;
            net += i;
        }
        ll x = net / n;
        ll r = 0;
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            if (r + vec[i] < x)
            {
                flag = true;
            }
            r = vec[i] + r - x;
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
