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
        string s;
        cin >> s;
        int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0';
        int x = s[3] - '0', y = s[4] - '0', z = s[5] - '0';
        if (a + b + c == x + y + z)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
