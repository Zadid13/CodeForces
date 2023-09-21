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
    ll res(0);
    cin >> t;
    while (t--)
    {
        string s1;

        cin >> s1;

        sort(s1.begin(), s1.end());

        if (s1[0] == s1[3])
        {
            res = -1;
        }
        else if (s1[1] == s1[3] || s1[0] == s1[2])
        {
            res = 6;
        }
        else
        {
            res = 4;
        }
        cout << res << endl;
    }

    return 0;
}