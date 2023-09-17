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
        map<ll, ll> ans;
        ll max_score = 0;

        for (ll i = 1; i <= n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x <= 10)
            {
                ans[y] = i;
            }
        }

        auto it = ans.rbegin();
        cout << it->second << endl;
    }

    return 0;
}