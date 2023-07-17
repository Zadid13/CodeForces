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

    {

        string s;
        cin >> s;
        int consecutive_count = 1;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                consecutive_count++;
                if (consecutive_count >= 7)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            else
            {
                consecutive_count = 1;
            }
        }

        if (consecutive_count < 7)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
