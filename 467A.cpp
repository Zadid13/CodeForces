#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t, r = 0;
    cin >> t;
    while (t--)
    {
        int p, s;
        cin >> p >> s;
        if (s - p >= 2)
        {
            r++;
        }
    }
    cout << r << endl;

    return 0;
}
