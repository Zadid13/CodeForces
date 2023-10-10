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

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mn=INT_MAX, mn1=INT_MAX, mn2=INT_MAX;
        for(ll i=0;i<n;i++){
            ll t;
            string s;
            cin>>t>>s;
            if(s[0]=='1'&&s[1]=='1'){
                mn = min(t, mn);
                mn1 = min(t, mn1);
                mn2 = min(t, mn2);
            }else if(s[0]=='1'){
            	mn1 = min(t, mn1);
            }else if(s[1]=='1'){
            	mn2 = min(t, mn2);
            }
        }
        if(mn1==INT_MAX || mn2==INT_MAX){
        	cout<<-1<<endl;
        }else{
            mn = min(mn,mn1+mn2);
            cout<<mn<<endl;
        }
    }
    return 0;
}
