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

    ll n, p;
    cin >> n;
    vector<ll> vec(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> p;
        vec[p] = i;
    }
    cout << vec[1];
    for (ll i = 2; i <= n; i++)
    {
        cout << " " << vec[i];
    }
    cout << endl;

    return 0;
}