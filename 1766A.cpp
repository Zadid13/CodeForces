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
        string n;
        cin >> n;
        ll l = n.length();
        ll ans = 0;
        ans += n[0] - '0';
        l--;
        ans += 9 * l;
        cout << ans << endl;
    }
    return 0;
}
