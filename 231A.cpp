#include <bits/stdc++.h>>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    int count = 0;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if (p == 0 || p == 1 || v == 0 || v == 1 || t == 0 || t == 1)
        {
            if (p + v + t >= 2)
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
