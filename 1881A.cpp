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

const int MAX_SIZE = 256;

void solve()
{

    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    int ct = 0;

    for (int i = 0; i <= 10; ++i)
    {
        if (x.find(s) != string::npos)
        {
            cout << i << endl;
            return; // Exit the function, not the program
        }
        x = x + x;
    }

    cout << -1 << endl;
}

int main()
{
    fast_io();
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
}
