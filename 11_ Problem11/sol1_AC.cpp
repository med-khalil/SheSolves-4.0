#include <iostream>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int prev = 1 , ans = 1 ;
        if(n==1)
        {
            cout << 0 << endl ;
        }
        else
        {
            n -= 2 ;
            while(n--)
            {
                ans = prev + ans ;
                prev = ans - prev ;
            }
            cout << ans << endl ;
        }
    }
}
