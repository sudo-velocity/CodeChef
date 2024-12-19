#include <bits/stdc++.h>
using namespace std;
bool isAlternting(string &str)
{
    for (int i = 1; i < str.length(); ++i)
        if (str[i] == str[i - 1])
            return 0;
    return 1;
}
void solve(int __test_case)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (n == 1)
    {
        cout << "Yes";
        return;
    }
    /*
        failing on 011
    */
    if (str[0] == '0')
    {
        int l = 0, r = n - 1;
        while (l < n)
        {
            if (l & 1)
            {
                if (str[l] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[l] == '0')
                    ;
                else
                    break;
            }
            l++;
        }
        while (r >= 0)
        {
            if (r & 1)
            {
                if (str[r] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[r] == '0')
                    ;
                else
                    break;
                ;
            }
            r--;
        }
        string temp = str;
        while (l < r)
        {
            swap(str[l], str[r]);
            l++, r--;
        }
        if (isAlternting(str))
        {
            cout << "Yes";
            return;
        }
        str = temp;
        for (auto &it : str)
            if (it == '1')
                it = '0';
            else
                it = '1';
        l = 0, r = n - 1;
        while (l < n)
        {
            if (l & 1)
            {
                if (str[l] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[l] == '0')
                    ;
                else
                    break;
            }
            l++;
        }
        while (r >= 0)
        {
            if (r & 1)
            {
                if (str[r] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[r] == '0')
                    ;
                else
                    break;
                ;
            }
            r--;
        }
        while (l < r)
        {
            swap(str[l], str[r]);
            l++, r--;
        }
        if (isAlternting(str))
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        for (auto &it : str)
            if (it == '0')
                it = '1';
            else
                it = '0';
        int l = 0, r = n - 1;
        while (l < n)
        {
            if (l & 1)
            {
                if (str[l] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[l] == '0')
                    ;
                else
                    break;
            }
            l++;
        }
        while (r >= 0)
        {
            if (r & 1)
            {
                if (str[r] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[r] == '0')
                    ;
                else
                    break;
                ;
            }
            r--;
        }
        string temp = str;
        while (l < r)
        {
            swap(str[l], str[r]);
            l++, r--;
        }
        if (isAlternting(str))
        {
            cout << "Yes";
            return;
        }
        str = temp;
        for (auto &it : str)
            if (it == '1')
                it = '0';
            else
                it = '1';
        l = 0, r = n - 1;
        while (l < n)
        {
            if (l & 1)
            {
                if (str[l] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[l] == '0')
                    ;
                else
                    break;
            }
            l++;
        }
        while (r >= 0)
        {
            if (r & 1)
            {
                if (str[r] == '1')
                    ;
                else
                    break;
            }
            else
            {
                if (str[r] == '0')
                    ;
                else
                    break;
                ;
            }
            r--;
        }
        while (l < r)
        {
            swap(str[l], str[r]);
            l++, r--;
        }
        if (isAlternting(str))
            cout << "Yes";
        else
            cout << "No";
    }
}
int main(void)
{
    // cin.tie(nullptr);
    // ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;
    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }
    return 0;
}