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

        vector<vector<char>> vec(8, vector<char>(8));
        string ans = "";

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> vec[i][j];
                if (vec[i][j] != '.')
                    ans += vec[i][j];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
