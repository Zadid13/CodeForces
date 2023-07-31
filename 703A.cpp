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

    int t, m_count = 0, c_count = 0, m, c;
    cin >> t;
    while (t--)
    {

        cin >> m >> c;
        if (m > c)
        {
            m_count++;
        }
        else if (c > m)
        {
            c_count++;
        }
    }

    if (m_count > c_count)
    {
        cout << "Mishka" << endl;
    }
    else if (c_count > m_count)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}