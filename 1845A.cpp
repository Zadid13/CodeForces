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

int main() {

    optimize();

    ll t;
    cin >> t;
    while (t--) {
        ll x, n, k, s;
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (ll i = 0; i < n; i++) cout << '1' << ' ';
            cout << endl;
        } else if (n % 2 == 1 && k == 2) {
            cout << "NO" << endl;
        } else if (k == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 1; i < n / 2; i++) cout << 2 << " ";
            cout << 2 + (n % 2) << endl;
        }
    }

    return 0;
}
