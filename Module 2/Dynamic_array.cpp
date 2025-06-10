# include <bits/stdc++.h>
using namespace std;
int main()
{
    // int array[5]; // static array
    int * array = new int[5]; // Dynamic array
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
        cout << array[i] << " " ;
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << array[i] << " " ;
    // }
    return 0; 
}

