/*#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, c = "codeforces";
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 10; i++)
    {
        if(s[i] != c[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}*/

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    string s, c = "codeforces";
    cin >> s;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != c[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}