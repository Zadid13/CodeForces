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
    ll a, b, c, e;
    cin >> a >> b;
    ll h = a;

    while (a >= b)
    {
        c = a / b;
        h += c;
        e = a % b;
        a = c + e;
    }

    cout << h << endl;
    return 0;
}