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

    int c;
    cin >> c;
    if (c % 5 == 0)
    {
        cout << (c / 5) << endl;
    }
    else
    {
        cout << ((c / 5) + 1) << endl;
    }

    return 0;
}