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

    int t, c = 0;
    cin >> t;
    // while (t--)
    //{
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
    }
    //}
    cout << c << endl;
    return 0;
}