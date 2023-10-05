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
	optimize();
	int t;
	cin>>t;
		while(t--){
			int x,y,n;
			cin>>x>>y>>n;
			vector<int> a(n,0);
			a[n-1]=y;a[0]=x;
			for(int i=1;i<n-1;i++){
				a[n-i-1]=a[n-i]-i;
			}
			if(a[1]-a[0]>n-2){
				for (int i = 0; i < n; ++i)
				{
					cout<<a[i]<<" ";
				}cout<<endl;
			}else{
				cout<<-1<<endl;
			}
		}
	return 0;
}
