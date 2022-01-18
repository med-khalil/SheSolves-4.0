#include <bits/stdc++.h>
#define lp(i,m,n) for (int i = m; i < n; i++)
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
  lp(i,0,n) cin >> a[i];
}
void writearr(ll a[],ll n){
  lp(i,0,n) cout<<a[i]<<" ";
  cout<<endl;
}
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  vector<ll> occ(30, 0);
  lp(i, 0, n)
  {
    occ[s[i] - 'a']++;
  }
  ll ans = 1e9;
  ll buffer = 0;
  for (int i = 0; i < 26; i++)
  {
    buffer = 0;
    if (occ[i])
    {
      for (int j = 0; j < 26; j++)
      {
        if (i != j && occ[j])
        {
          buffer += min(abs(occ[i] - occ[j]), occ[j]);
        }
      }
      ans = min(ans, buffer);
    }
  }
  cout << ans << endl;
}
int main(){
    speed;
    int t ; cin >>t;
    while(t--) solve();
}
