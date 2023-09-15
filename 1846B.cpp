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
        ll n = 3;

        vector<string> vec;
        vec.reserve(n);

        for (ll i = 0; i < n; i++)
        {
            string m;
            cin >> m;
            vec.pb(m);
        }
        string ans = "DRAW";
        for (ll i = 0; i < n; i++)
        {
            if (vec[i][0] == vec[i][1] && vec[i][1] == vec[i][2] && vec[i][0] != '.')
                ans = vec[i][0];
        }
        for (ll i = 0; i < n; i++)
        {
            if (vec[0][i] == vec[1][i] && vec[1][i] == vec[2][i] && vec[0][i] != '.')
                ans = vec[0][i];
        }
        if (vec[0][0] == vec[1][1] && vec[1][1] == vec[2][2] && vec[0][0] != '.')
        {
            ans = vec[0][0];
        }
        if (vec[0][2] == vec[1][1] && vec[1][1] == vec[2][0] && vec[0][2] != '.')
        {
            ans = vec[0][2];
        }
        cout << ans << endl;
    }

    return 0;
}
