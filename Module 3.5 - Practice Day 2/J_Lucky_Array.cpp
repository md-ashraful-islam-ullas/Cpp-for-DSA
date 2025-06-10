# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(array[i], mn);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == mn)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    return 0; 
}