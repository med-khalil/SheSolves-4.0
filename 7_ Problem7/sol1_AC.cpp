#include <bits/stdc++.h>
using namespace std;
int main() {
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
    return 0;
} 
