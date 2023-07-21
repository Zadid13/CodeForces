#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define ll long long

int main()
{
    optimize();

    int n, e_c = 0, o_c = 0, d_i1 = 0, d_i2 = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] % 2 == 0)
        {
            o_c++;
            d_i2 = i;
        }
        else
        {
            e_c++;
            d_i1 = i;
        }
    }
    if (e_c > o_c)
    {
        cout << d_i2 + 1 << endl;
    }
    else
    {
        cout << d_i1 + 1 << endl;
    }

    return 0;
}
