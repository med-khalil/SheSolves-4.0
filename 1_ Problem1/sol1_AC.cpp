#include <bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <string> mat(n);
        for(int i = 0; i < n; i++) {
            cin >> mat[i];
        }
        int numberOfLinesWithActivePixels = 0;
        for(int i = 0; i < n; i++) {
            bool ok = false;
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == '#') ok = true;
            }
            if(ok) numberOfLinesWithActivePixels++;
        }
        if(numberOfLinesWithActivePixels == 1) {
            cout << "MINUS\n";
        }
        else {
            cout << "PLUS\n";
        }
    }
    return 0;
}   
