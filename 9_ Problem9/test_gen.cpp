#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

string randomString(int n, char l, char r) {
    string res;
    for (int i = 1; i <= n; ++i){
        char tmp;
        for(int j=0 ; j<=12; j++){
            tmp=randomInt(l,r);
            if(tmp=='A'||tmp=='B'){
                break;
            }
        }
        res += tmp;
        assert(*--res.end()>='A'&&*--res.end()<='Z');
    }
    
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
void gen_input(){
    int t=randomInt(1,1);
    cout<<t<<'\n';
    for(int i=0;i<t;i++){
        int n=randomInt(1,100);
        cout<<n<<'\n';
        string s[n];

        for(int j=0;j<n;j++){
            int len=randomInt(1,8);
            s[j]=randomString(len,'A','Z');
            cout<<s[j]<<( j!=n-1 ? ' ' : '\n' );
        }

    }
}
int main() {
    const int tests = 30;
    const int width = digitsNbr(tests);
    for (int i = 20; i <= tests; ++i) {
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

        gen_input();
    }
}
