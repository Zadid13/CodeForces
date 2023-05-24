#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    string s1,s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.length(); i++)
    {
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }

    if(s1>s2)
        cout<<"1";
    else if(s1<s2)
        cout<<"-1";
    else
        cout<<"0";


    return 0;
}
