#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int digitsNbr(int x) {
    if (x == 0) {
        return 1;
    }
    int ret{};
    while (x != 0) {
        ret++;
        x /= 10;
    }
    return ret;
}

void solve() {
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
				if( t[i]==t[j] && s[i]!=s[j] ){
					ans++;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}

int main() {
    const int tests = 30;
    const int width = digitsNbr(tests);
    for (int i = 1; i <= tests; ++i) {
        const int testWidth = digitsNbr(i);
        string testNumber(width - testWidth, '0');
        char *testNumberStr = new char[testWidth + 1];
        sprintf(testNumberStr, "%d", i);
        testNumber += testNumberStr;
        fstream fs_in,fs_out;
        fs_in.open("tests/test" + testNumber + ".in", ios::in);
        fs_out.open("tests/test" + testNumber + ".ans", ios::out);
        cin.sync();
        cout.rdbuf(fs_out.rdbuf());
        cin.rdbuf(fs_in.rdbuf());
        solve();
    }
}