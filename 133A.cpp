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

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            return 0; // Exit the program after printing "YES"
        }
    }
    cout << "NO" << endl; // Print "NO" if no valid instruction found

    return 0;
}

/*when a valid instruction is found ('H', 'Q', '9' or '+'), it immediately prints "YES" and exits the program using return 0;. If the loop completes without finding any valid instruction, it prints "NO".*/
