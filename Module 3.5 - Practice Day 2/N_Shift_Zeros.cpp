# include <bits/stdc++.h>
using namespace std;
int * shiftingzero(int array[], int n)
{
    int * array2 = new int[n];
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            array2[counter] = array[i];
            counter++;
        }
    }

    for(int i = counter; i < n; i++)
    {
        array2[i] = 0;
    }
    return array2;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int* array2 = shiftingzero(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array2[i] << " ";
    }

    delete[] array2;
    return 0; 
}