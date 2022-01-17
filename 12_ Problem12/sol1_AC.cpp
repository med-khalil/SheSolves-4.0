#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; string s;
        cin >> n >> s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '>')
                ans = max(ans, n-i);
            else if (s[i] == '<')
                ans = max(ans, i+1);
        }
        cout << ans << '\n';
    }
}
