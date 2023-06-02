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

    int y;
    cin >> y;
    while (1)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y;
            return 0;
        }
    }

    return 0;
}