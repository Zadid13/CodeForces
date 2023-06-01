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

    int t, x = 0;
    ;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' && s[i + 1] == '+')
            {
                x++;
            }
            else if (s[i] == '-' && s[i + 1] == '-')
            {
                x--;
            }
        }
    }

    cout << x << endl;

    return 0;
}