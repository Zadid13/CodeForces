
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                s[i] = 'w';
                ll x = min(i + k, n);
                for (ll j = i; j < x; j++)
                {
                    if (s[j] == 'B')
                    {
                        s[j] = 'w';
                        i = j - 1;
                    }
                }
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}