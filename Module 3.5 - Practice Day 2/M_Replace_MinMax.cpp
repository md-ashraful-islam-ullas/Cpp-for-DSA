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

    int mx = INT_MIN;
    int mn = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
        mn = min(mn, array[i]);
    }

    int mx_index = 0;
    int mn_index = 0;
    for(int i = 0; i < n; i++)
    {
        if (array[i] == mx)
        {
            mx_index = i;
        }
        if (array[i] == mn)
        {
            mn_index = i;
        }
    }
    swap(array[mx_index],array[mn_index]);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0; 
}