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

    string s, s1, s2, s3, s4;
    cin >> s >> s1 >> s2;
    s3 = s + s1;
    sort(s3.begin(), s3.end());
    sort(s2.begin(), s2.end());
    if (s3 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}