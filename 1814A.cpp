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
        ll k, n;
        cin >> n >> k;

        ll int p, q;

        if (k == 1)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0 && k % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else if (n % 2 != 0 && k % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != 0 && k % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0 && k % 2 != 0)
        {
            if (n % 2 == 0 || (n / 2) >= k)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
