#include <bits/stdc++.h>
#include <unordered_set>
#define PI 3.14159265359
#define lp(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mk make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
void readarr(ll  a[] , ll n){
  lp(i,n) cin >> a[i];
}
void writearr(ll a[],ll n){
  lp(i,n) cout<<a[i]<<" ";
  cout<<endl;
}
void solve(){
	int n ; cin >> n;
	string s ; cin >> s;
	vector<ll>occ(30,0);
	ll mx = 0;
	lp(i,n){
		occ[s[i]-'a']++;
		mx = max(mx,occ[s[i]-'a']); 
	}
	ll ans = 0 ;
	for(int i=0;i<26;i++){
		if(occ[i]){
			ans+=abs(mx-occ[i]);
		}
	}
	cout<<ans<<endl;

}
int main(){
    speed;
    int t ; cin >>t;
    while(t--) solve();
}
