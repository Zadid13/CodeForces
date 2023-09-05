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

    ll n, ans;
    while (cin >> n)
    {
        ans = 0;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = n - 1;
                ans++;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}