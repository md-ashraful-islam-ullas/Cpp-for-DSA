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
    for (int i = 0; i < n; i++)
    {
        mx = max(array[i] , mx);
    }
    cout << mx << endl;
    return 0; 
}