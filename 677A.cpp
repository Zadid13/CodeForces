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

    int t, h, n, s = 0;

    cin >> n;
    cin >> h;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= h)
        {
            s += 1;
        }
        else
        {
            s += 2;
        }
    }

    cout << s << endl;
    return 0;
}