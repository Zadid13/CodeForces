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
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, odd(0), even(0);
        cin >> n;
        n *= 2;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd == even)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
