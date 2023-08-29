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

    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll dp[n + 1];
    dp[0] = 0;
    ll x, y, z;

    for (int i = 1; i <= n; i++)
    {
        x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if (i >= a)
        {
            x = dp[i - a];
        }
        if (i >= b)
        {
            y = dp[i - b];
        }
        if (i >= c)
        {
            z = dp[i - c];
        }
        dp[i] = 1 + max(z, max(x, y));
    }
    cout << dp[n] << endl;

    return 0;
}