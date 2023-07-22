#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define ll long long

int main()
{
    optimize();

    ll t;
    cin >> t;
    while (t--)
    {

        ll a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        if (b > a)
        {
            count++;
        }
        if (c > a)
        {
            count++;
        }
        if (d > a)
        {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}