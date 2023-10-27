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

        string s;
        cin >> s;

        ll l = n / 2, r = (n + 1) / 2;
        if (n % 2 == 1)
        {
            r--;
        }
        else
        {
            l--;
        }

        ll lt = l, rt = r;
        while (lt > 0 && rt < n)
        {
            if (s[lt] != s[rt])
                break;
            lt--;
            rt++;
        }

        bool flag = false;
        if (lt == 0 && rt == n - 1 && s[lt] == s[rt])
            flag = true;

        ll lf = 0, rf = n - 1;
        while (lf < rf && !flag)
        {
            if (s[lf] != s[rf])
                break;
            lf++;
            rf--;
        }

        if (lf == l && rf == r && s[l] == s[r])
            flag = true;

        if (!flag)
        {
            ll vis = rt - lf, len = rf - rt;
            for (ll i = rt; i <= rf; i++)
            {
                if (s[i] == '1')
                    s[i] = '0';
                else
                    s[i] = '1';
            }

            flag = true;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] != s[n - i - 1])
                    flag = false;
            }
        }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
