#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;

    for(int i = 1; i<n; ++i){
        if(a[i] == '#' && b[i] == '#'){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tests = 1;
    cin >> tests;
    while(tests--){
        solve();
    }
}
