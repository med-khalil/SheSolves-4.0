#include <bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int sum=0;
 for(int i = 0;i<s.length();i++){
    sum+= s[i]-'0';
 }
 if(sum%9||s[s.length()-1]%2){
     cout<<"NO";
 }
 else{
     cout<<"YES";
 }
}
