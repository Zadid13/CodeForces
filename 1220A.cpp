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

    ll n;
    string s;
    cin >> n;
    vector<ll> one(n, -1);
    vector<ll> zero(n, -1);

    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'n')
        {
            one[i] = 1;
        }
        else if (s[i] == 'z')
        {
            zero[i] = 0;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (one[i] == 1)
        {
            cout << one[i] << " ";
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (zero[i] == 0)
        {
            cout << zero[i] << " ";
        }
    }
    return 0;
}