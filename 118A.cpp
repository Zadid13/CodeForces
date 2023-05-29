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

    int n;
    string s, t;
    cin >> s;
    n = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else
        {
            t += '.';
            t += s[i];
        }
    }

    cout << t << endl;
    return 0;
}

// Another Implementation
/*

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main()
{
    optimize();

    string s, ans;

    cin >> s;

    for (auto u : s)
    {
        char c = tolower(u);

        if (!isVowel(c))
        {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;
}


*/
