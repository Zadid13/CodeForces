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

int main()
{
    optimize();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<char> vec;
        vec.reserve(n);
        for (ll i = 0; i < n; i++)
        {
            char b;
            cin >> b;
            vec.pb(b);
        }
        vector<char> vec2;
        vec2.reserve(n);
        for (ll i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            vec2.pb(c);
        }

        bool valid = true;
        for (ll i = 0; i < n; i++)
        {
            if (vec[i] == 'R')
            {
                if (vec2[i] != 'R')
                {
                    valid = false;
                    break;
                }
            }
            else
            {
                if (vec2[i] == 'R')
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
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
