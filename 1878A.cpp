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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll max_count = 0;
        map<ll, ll> count;

        ll left = 0;
        string result = "NO";

        for (ll right = 0; right < n; right++)
        {
            count[a[right]]++;

            if (count[k] > max_count)
            {
                max_count = count[k];
            }

            while (right - left + 1 - max_count > 0)
            {
                count[a[left]]--;
                left++;
            }

            if (count[k] >= (right - left + 1) / 2 + 1)
            {
                result = "YES";
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
