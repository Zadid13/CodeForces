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

    ll t, n, sumValue = 0;
    cin >> t;

    while (t--)
    {

        string vec;
        cin >> vec;

        size_t pos = vec.find('+');

        ll a = stoi(vec.substr(0, pos));
        ll b = stoi(vec.substr(pos + 1));

        ll res = a + b;
        cout << res << endl;
    }
    return 0;
}