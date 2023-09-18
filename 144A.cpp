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
    vector<ll> vec;
    vec.reserve(n);
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        vec.pb(v);
    }
    int mx = *max_element(vec.begin(), vec.end()), ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (vec[i] == mx)
        {
            ll j = i;
            while (j != 0)
            {
                ans++;
                swap(vec[j], vec[j - 1]);
                j--;
            }
            break;
        }
    }
    int mn = *min_element(vec.begin(), vec.end());
    for (ll i = n - 1; i >= 0; i--)
    {
        if (vec[i] == mn)
        {
            ll j = i;
            while (j != n - 1)
            {
                ans++;
                swap(vec[j], vec[j + 1]);
                j++;
            }
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
