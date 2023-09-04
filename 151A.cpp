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

    ll n, k, l, c, d, p, nl, np, h, t, m, z, res;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    h = k * l;
    t = h / nl;
    m = c * d;
    z = p / np;
    res = min(min(t, m), z) / n;
    cout << res << endl;

    return 0;
}