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

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s1;
        cin >> s1;
        string s2 = "";
        for (int i = 0; i < n; i++)
        {
            s2 += s1[i];
            for (int j = i + 1; j < n; j++)
            {
                if (s1[j] == s1[i]){i = j; break;}
            }
        }
        cout<<s2<<endl;
    }

    return 0;
}