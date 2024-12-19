#include<bits/stdc++.h>
using namespace std; 
void solve(int __test_case)
{
    int n; 
    cin >> n; 
    vector<int> arr(n); 
    for(auto &it: arr)
        cin >> it; 
    vector<int> suffMax(n, 0); 
    suffMax[n-1] = arr[n-1]; 
    for(int i = n-2; i >= 0; --i)
        suffMax[i] = max(suffMax[i+1], arr[i]); 
    int ans = 0; 
    int curr = 0; 
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] < suffMax[i])
            curr++; 
        else 
        {
            ans = max(ans, curr); 
            curr = 0; 
        }
    }
    ans = max(ans, curr); 
    cout << ans; 
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