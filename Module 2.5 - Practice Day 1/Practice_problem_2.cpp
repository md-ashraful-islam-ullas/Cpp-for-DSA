# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* array1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    int m;
    cin >> m;
    int* array2 = new int[m];
    for (int i = 0; i < m; i++)
    {
        array2[i] = array1[i];
    }
    
    delete[] array1;

    for (int i = n; i < m; i++)
    {
        cin >> array2[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << array2[i] << " ";
    }
    return 0; 
}