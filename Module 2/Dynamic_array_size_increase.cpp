# include <bits/stdc++.h>
using namespace std;
int main()
{
    int* array1 = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array1[i];
    }

    int* array2 = new int[7];
    for (int i = 0; i < 7; i++)
    {
        array2[i] = array1[i]; 
    }
    delete[] array1;
    array2[5] = 7;
    array2[6] = 8;
    for (int i = 0; i < 7; i++)
    {
        cout << array2[i] << " ";
    }
    return 0; 
}