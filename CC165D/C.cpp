#include <bits/stdc++.h>
using namespace std;
void solve(int __test_case)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans += max(0, arr[i] - i);
    cout << ans;
}
int main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;
    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }
    return 0;
}