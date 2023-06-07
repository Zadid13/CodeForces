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

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() % 2)
        {
            s.erase(s.begin() + s.size() / 2);
        }
        if (s != string(s.size(), s[0]))
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