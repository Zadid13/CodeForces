// Limak Largest > BEAR|| BRO BOB

// Limak  l     <=               BOB b

// 3l                             2b

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

    int l, b, y = 0;

    cin >> l >> b;
    if (l > b)
    {
        y = 0;
    }
    else
    {
        while (l <= b)
        {
            l *= 3;

            b *= 2;
            y++;
        }
    }
    cout << y << endl;

    return 0;
}