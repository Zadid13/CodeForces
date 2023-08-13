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

    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "I hate that ";
        }
        if (i % 2 == 0)
        {
            cout << "I love that ";
        }
    }
    if (n % 2 != 0)
    {
        cout << "I hate it";
    }
    if (n % 2 == 0)
    {
        cout << "I love it";
    }

    return 0;
}