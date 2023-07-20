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

    string s;
    char u;
    bool c = true;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            c = false;
        }
    }

    if (c == true)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;

    return 0;
}
