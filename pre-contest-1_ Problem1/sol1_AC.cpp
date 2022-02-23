#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n;
    vector<int> v(n) ;
    for(int i=0 ; i<n ; i++){
        cin >> v[i] ;
    }
    string s ;
    cin >> s ;
    char c = s[s.length()-1] ;
    if(c =='H'){
        cout << "sadok" ;
    }else{
        cout << "haroun" ;
    }

}
