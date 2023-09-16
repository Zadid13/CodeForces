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
        ll b, c, h, d, e, f;
        cin >> b >> c >> h;
        if (b == c + h)
        {
            d = b + c + h - 1;
            cout << d << endl;
        }
        else if (b > c + h)
        {
            e = 2 * (c + h) + 1;
            cout << e << endl;
        }
        else
        {
            f = 2 * b - 1;
            cout << f << endl;
        }
    }
    return 0;
}