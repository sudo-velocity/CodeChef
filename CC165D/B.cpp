#include<bits/stdc++.h>
using namespace std; 
void solve(int __test_case)
{
    int n, m, k; 
    cin >> n >> m >> k; 
    int diff = INT_MAX; 
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            int temp = abs(2 * (i + j) - k); 
            diff = min(diff, temp);
        }
    }
    cout << diff; 
}
int main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1; 
    cin >> __test_case; 
    for(int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t); 
        cout << endl; 
    }
    return 0; 
}