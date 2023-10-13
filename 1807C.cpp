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
        ll n;
        cin >> n;
        string x;
        cin >> x;

        vector<pair<char, int>> vec(130);

        for (ll i = 0; i < n; i++)
        {
            if (vec[x[i]].second == 0)
            {
                if (i % 2 == 0)
                {
                    vec[x[i]].second = 1;
                }
                else
                {
                    vec[x[i]].second = 2;
                }
            }
        }

        bool isValid = true;

        for (ll i = 1; i < n; i++)
        {
            if (vec[x[i]].second == vec[x[i - 1]].second)
            {
                isValid = false;
                break;
            }
        }

        if (isValid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}