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

    ll a, b;
    cin >> a >> b;

    if (a >= b)
    {
        a -= b;
        a /= 2;
        cout << b << ' ' << a << endl;
    }
    else
    {
        b -= a;
        b /= 2;
        cout << a << ' ' << b << endl;
    }

    return 0;
}