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
    cin >> s;
    int n = 5, target = 0;
    while (n--)
    {
        string l;
        cin >> l;

        if (s[0] == l[0])
            target = 1;
        else if (s[1] == l[1])
            target = 1;
    }
    if (target == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}