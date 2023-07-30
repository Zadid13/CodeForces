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

    int n;
    // char A='A',D='D';
    int A_count = 0;
    int D_count = 0;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            A_count++;
        }
        if (s[i] == 'D')
        {
            D_count++;
        }
    }

    if (A_count > D_count)
    {
        cout << "Anton" << endl;
    }
    else if (D_count > A_count)
    {
        cout << "Danik" << endl;
    }
    else if (D_count == A_count)
    {
        cout << "Friendship" << endl;
    }

    return 0;
}