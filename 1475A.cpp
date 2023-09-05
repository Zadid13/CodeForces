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
#define all(x) vec.begin(), vec.end()
#define ins insert
#define ll long long

int main()
{
    optimize();

    ll n;
    cin >> n;

    vector<ll> vec;
    vec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        vec.pb(d);

        if (vec[i] % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            vec[i];
            while (vec[i] % 2 == 0)
            {
                vec[i] /= 2;
            }
            if (vec[i] > 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
