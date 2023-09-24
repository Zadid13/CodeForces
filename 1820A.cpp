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
        string s;
        cin >> s;
        if (s == "^")
        {
            cout << 1 << endl;
            continue;
        }
        ll ans = 0;
        if (s[0] == '_')
            ans++;
        if (s.back() == '_')
            ans++;
        for (ll i = 0; i < (int)s.size() - 1; i++)
        {
            if (s[i] == '_' && s[i + 1] == '_')
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}