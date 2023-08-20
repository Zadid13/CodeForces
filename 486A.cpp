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

    ll n, a;
    cin >> n;
    if (n % 2 == 0)
    {
        a = n / 2;
    }
    else
    {
        a = ((n + 1) / 2) * (-1);
    }
    cout << a << endl;

    return 0;
}
