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

        int k;
        cin >> k;
        for (int i = 0;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            else
            {
                --k; // 3 2 1 0
                if (k == 0)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}