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
#define ll long long

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<string> dex;
        for (int i = 0; i < n - 1; i++)
        {
            string temp;
            temp.pb(s[i]);
            temp.pb(s[i + 1]);
            dex.insert(temp);
        }
        cout << dex.size() << endl;
    }

    return 0;
}