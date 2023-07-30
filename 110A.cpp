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

    ll n;
    cin >> n;
    ll count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
