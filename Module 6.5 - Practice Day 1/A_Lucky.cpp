# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int sum_first = 0;
        int sum_last = 0;
        for (int i = 0; i < 3; i++)
        {
            int digit = s[i] - '0';
            sum_first += digit;
        }
        for (int i = 3; i < 6; i++)
        {
            int digit = s[i] - '0';
            sum_last += digit;
        }

        if (sum_first == sum_last) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0; 
}