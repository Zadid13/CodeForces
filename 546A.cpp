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

    int k, n, w, m, sum = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        sum += i;
    }
    m = (sum * k) - n;
    if (m < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << m << endl;
    }

    return 0;
}
