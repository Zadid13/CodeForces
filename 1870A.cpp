#include<bits/stdc++.h>
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
 
int main() {
    optimize()
    ll t,  j;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;
        ll sum = 0;

        for (ll i = 0; i < x; i++)
        {
            sum += i;
            n--;
        }

        if (n < 0 || x - 1 > k)
        {
            cout << -1 << endl;
        }
        else if (k == x)
        {
            sum += (n * (k - 1));
            cout << sum << endl;
        }
        else
        {
            sum += (n * k);
            cout << sum << endl;
        }
    }
    
        return 0;
}
