#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long

int main()
{
    optimize();

    ll t;
    cin >> t;
    while (t--)
    {
        string s, str = "Yes", str2 = "YES";
        cin >> s;
        if (str.find(s[0]) == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (ll i = 0; i < s.length() - 1; i++)
        {
            if ((s[0] != 'Y' && s[0] != 'e' && s[0] != 's') || (s[i] == 'Y' && s[i + 1] != 'e') || (s[i] == 'e' && s[i + 1] != 's') || (s[i] == 's' && s[i + 1] != 'Y'))
            {
                str2 = "NO";
                break;
            }
        }
        cout << str2 << endl;
    }

    return 0;
}