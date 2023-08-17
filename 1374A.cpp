#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define ll long long

int main()
{
    optimize();

    ll t;
    ll x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        ll ans = 0;
        ans = n - n % x + y;
        if (ans <= n)
        {
            cout << ans << endl;
        }
        else
        {
            cout << (n - n % x - (x - y)) << endl;
        }
    }

    return 0;
}