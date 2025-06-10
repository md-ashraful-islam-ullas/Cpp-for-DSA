# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        string s = "";
        int mx = max(a.size(), b.size());

        for (int i = 0; i < mx; i++)
        {
            if (i < a.size()) s+=a[i];
            if (i < b.size()) s+=b[i];
        }

        cout << s << endl;
    }
    return 0; 
}