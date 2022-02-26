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
void solve(){
    int n;
    cin >> n;
    string OriginalState;
    cin >> OriginalState;
    string CombinationLock;
    cin >> CombinationLock;
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += min({(10 - abs(OriginalState[i] - CombinationLock[i])), abs(OriginalState[i] - CombinationLock[i])});
    cout << ans << "\n";
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