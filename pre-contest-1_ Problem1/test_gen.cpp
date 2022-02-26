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

string finalString  ;

void addToString(char c , int n){
    for(int i=0 ;i<n ; i++){
        finalString += c ;
    }

}

int main() {
    const int tests = 30;
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

        int n = randomInt(1, 10);
        cout << n << endl;
        vector<int> v ;
        for(int i=0 ; i<n ; i++){
            int ai = randomInt(1,5) ;
            cout << ai << ' ' ;
            v.push_back(ai) ;
        }
        cout << endl ;
        v.push_back(20) ;


        finalString = "" ;
        int Tcoun = 0 , Hcoun = 0 ;


        //continue generating untill the string is valid
        while(Tcoun < n && Hcoun <n){
            int k = randomInt(1,v[Tcoun]+v[Tcoun+1]-1);
            if( k>=v[Tcoun]){
                Tcoun ++ ;
                if(Tcoun == n){
                    //add exactly v[Tcoun]
                    addToString('T',v[Tcoun-1]);
                    continue ;
                }else{
                    //add k to the string
                   addToString('T',k);
                }
            }else{
                addToString('T',k);
            }
            k = randomInt(1,v[Hcoun]+v[Hcoun+1]-1) ;
            if( k>=v[Hcoun]){
                Hcoun ++ ;
                if(Hcoun == n){
                    //add exactly v[Hcoun]
                    addToString('H',v[Hcoun-1]);
                    continue ;
                }else{
                    //add to the string
                   addToString('H',k);
                }

            }else{
            addToString('H',k);
            }
        }
        cout << finalString << endl ;
    }
}
