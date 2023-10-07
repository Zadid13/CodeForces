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

    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<string> c(n);
        for (int j = 0; j < n; j++) {
            cin >> c[j];
        }
        int p = 0;
        for (int j = 0; j < m; j++) {
            bool ok = false;
            for (int k = 0; k < n; k++) {
                if (c[k][j] == "vika"[p]) {
                    ok = true;
                }
            }
            if (ok) {
                p++;
                if (p == 4) {
                    break;
                }
            }
        }
        if (p == 4) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
