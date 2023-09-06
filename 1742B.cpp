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
#define ll long long
const long long N = 1e6 + 5;
map<ll, ll> mp;
ll a[N];

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        mp.clear();
        ll n, flag = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] > 1)
                flag = 1;
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
