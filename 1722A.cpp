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

        string s, g = "Timur";
        cin >> s;

        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        if (g == s)
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