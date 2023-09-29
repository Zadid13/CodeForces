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
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long

int main()
{
    optimize();

ll t;
cin>>t;
while(t--){

{
    ll n;
    cin>>n;
    ll cnt = 1;
    ll temp = n;
    while(n != 1) { 
    	cnt += (n%2 != 0);
    	n /= 2;
    }
    cout << 2*temp - cnt << endl;
    }
}


    return 0;
}