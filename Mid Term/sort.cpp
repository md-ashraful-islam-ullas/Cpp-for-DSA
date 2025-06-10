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

    sort(array, array+n); // Accending
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array,array+n,greater<int>()); // Descending
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0; 
}