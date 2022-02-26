#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

string randomString(int n, char l, char r) {
    int len = r - l + 1;
    string res;
    for (int i = 1; i <= n; ++i)
        res += char(l + randomInt(0, len - 1));
    return res;
}

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

int main() {
    const int tests = 100;
    const int width = digitsNbr(tests);
    for (int i = 1; i <= tests; ++i) {
        stringstream ss;
        const int testWidth = digitsNbr(i);
        string testNumber(width - testWidth, '0');
        char *testNumberStr = new char[testWidth + 1];
        sprintf(testNumberStr, "%d", i);
        testNumber += testNumberStr;
        ss << "tests/test" << testNumber << ".in";
        delete[] testNumberStr;

        char fileName[20];
        ss >> fileName;
        freopen(fileName, "w", stdout);

        // ------------------------------------------ CHANGE THIS
        // 1 <= k <= 100
        // 1 <= s <= 100,000
        int t = randomInt(1, 100);
        cout << t << '\n';
        while (t--) {
            int n = randomInt(3, 100);
            cout << n << '\n';
            string ret;
            for (int r = 1; r <= 2; r++) {
                for (int c = 1; c <= n; c++) {
                    if (r == 1 && c == 1)
                        ret += '.';
                    else if (r == 2 && c == n)
                        ret += '.';
                    else {
                        int rand_temp = randomInt(1, 5);
                        if (rand_temp == 1) {
                            ret += '#';
                        } else {
                            ret += '.';
                        }
                    }
                }
                ret += '\n';
            }
            cout << ret;
        }
    }
}
