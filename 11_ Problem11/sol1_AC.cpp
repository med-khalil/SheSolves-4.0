#include <iostream>

using namespace std ;

int main()
{
    int t , MOD = 1e9+7 ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        long long int prev = 1 , temp , ans = 1 ;
        if(n==1)
        {
            cout << 0 << endl ;
        }
        else
        {
            n -= 2 ;
            while(n--)
            {
                temp = ans ;
                ans = (prev + ans) % MOD ;
                prev = temp ;
            }
            cout << ans << endl ;
        }
    }
}
