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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n + 1, 0);
        int r = -1;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if ((++vec[a]) == 3)
            {
                r = a;
            }
        }
        cout << r << endl;
    }

    return 0;
}