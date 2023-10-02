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

        ll cmp1, cmp2;
        cin >> cmp1 >> cmp2;

        bool possible = true;
        for (ll i = 1; i < n; i++)
        {

            ll u1, u2;
            cin >> u1 >> u2;

            if (u1 >= cmp1 && cmp2 <= u2)
            {
                possible = false;
            }
        }

        if (possible)
        {
            cout << cmp1 << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
