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
    // sort(array+1, array+n); // Accending
    sort(array, array+n, greater<int>()); // Descending
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0; 
}