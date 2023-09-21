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
        vector<ll> vec(n);
        for (auto &a : vec)
        {
            cin >> a;
        }
        ll most = 0;
        for (ll i = 0; i < n; i++)
        {
            vec[i]++;

            ll prod = 1;
            for (auto &a : vec)
            {
                prod *= a;
            }
            most = max(most, prod);
            vec[i]--;
        }
        cout << most << endl;
    }

    return 0;
}