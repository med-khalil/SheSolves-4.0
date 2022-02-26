#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		string s[n];
		long long int t[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
			assert(s[i].size()<=8);
			t[i]=0;			
			for(int j=0;j<s[i].size();j++){
				if( s[i][j]-'A'+1 < 10){
					t[i]*=10;
				}else{
					t[i]*=100;
				}
				t[i]+=s[i][j]-'A'+1;
			}

		}
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if( t[i]==t[j] && s[i]!=s[j]  ){
					ans++;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}
