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

    ll n, m, a, b, sol1, sol2;

    // n = 6 planed ride
    // m = 2 rides covered by special ticket
    // a = 1 tk of a one ride ticket
    // b = 2 tk for m ticket

    cin >> n >> m >> a >> b;
    
    sol1 = (n / m) * b + min((n % m) * a, b);
    sol2 = (n * a);

    if (sol1 < sol2)
    {
        cout << sol1 << endl;
    }
    else
    {
        cout << sol2 << endl;
    }

    return 0;
}
