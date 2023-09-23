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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        bool inserted = false;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] < c)
            {
                string ans = s.substr(0, i);
                ans += c;
                ans += s.substr(i);
                cout << ans << endl;
                inserted = true;
                break;
            }
        }
        if (!inserted)
        {
            string ans = s + c;
            cout << ans << endl;
        }
    }
    return 0;
}
