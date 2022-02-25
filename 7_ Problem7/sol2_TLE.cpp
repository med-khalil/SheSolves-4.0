#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    int ara_org[5000], ara_need[5000], n;
    int up, down, sum = 0;
    char original[5000], needed[5000];
    scanf("%d", &n);
    scanf("%s", &original);
    scanf("%s", &needed);
    for(int i = 0; i<n; i++) {
        ara_org[i]=original[i]-'0';
    }
    for(int i=0; i<n; i++) {
        ara_need[i]=needed[i]-'0';
    }
    for(int i=0; i<n; i++) {
        up = 0; down = 0;
        for(int j=ara_org[i]; j!=ara_need[i]; j++) {
            if(j==10) j=0;
            up++;
        }
        up += 1;
        for(int j=ara_org[i]; j!=ara_need[i]; j--) {
            if(j==-1) j=9;
            down++;
        }
        down+=1;
        sum+=min(up, down);
    }
    printf("%d\n", sum-n);
    return 0;
}
