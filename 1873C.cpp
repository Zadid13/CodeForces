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
        char f[10][10];
        vector<pair<ll, ll>> pos;
        for (ll i = 0; i < 10; i++)
        {
            for (ll j = 0; j < 10; j++)
            {
                cin >> f[i][j];
                if (f[i][j] == 'X')
                    pos.pb({j, i});
            }
        }
        ll res = 0;
        for (auto p : pos)
        {
            if (p.first > 3 && p.first < 6 && p.second > 3 && p.second < 6)
                res += 5;
            else if (p.first > 2 && p.first < 7 && p.second > 2 && p.second < 7)
                res += 4;
            else if (p.first > 1 && p.first < 8 && p.second > 1 && p.second < 8)
                res += 3;
            else if (p.first > 0 && p.first < 9 && p.second > 0 && p.second < 9)
                res += 2;
            else
                res += 1;
        }
        cout << res << endl;
    }
    return 0;
}