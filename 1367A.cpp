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
        string str, t;
        cin >> str;
        int len = str.length();
        for (int i = 0; i < len - 1; i++)
        {
            if (i == 0)
            {
                t += str[i];
            }
            if (str[i] == str[i - 1])
            {
                t += str[i];
                i++;
            }
        }
        t += str[len - 1];
        cout << t << endl;
    }

    return 0;
}
