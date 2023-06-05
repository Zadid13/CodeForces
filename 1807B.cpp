#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
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
        vector<ll> v(n);
        ll m = 0, b = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                m += v[i];
            }
            else
            {
                b += v[i];
            }
        }
        if (m > b)
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