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

    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        // if (a[0] != uppercase())
        //{
        a[0] = toupper(a[0]);
        //}
    }
    cout << a << endl;
    return 0;
}