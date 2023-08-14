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

    int t, n;
    cin >> t;
    int p(0), c(0);

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n > 0)
        {
            p += n;
        }
        else
        {
            if (p < 1)
            {
                c++;
            }
            else
            {
                p--;
            }
        }
    }

    cout << c << endl;
    return 0;
}
