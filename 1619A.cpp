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
#define all(x) vec.begin(), vec.end()
#define ins insert
#define ll long long

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<string> vec;
    vec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        vec.push_back(str);

        if (str.size() % 2 == 0)
        {
            string x, y;
            for (int i = 0; i < str.size() / 2; i++)
            {
                x += str[i];
            }
            for (int i = str.size() / 2; i < str.size(); i++)
            {
                y += str[i];
            }
            if (x == y)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}