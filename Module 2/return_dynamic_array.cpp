# include <bits/stdc++.h>
using namespace std;
int* fun()
{
    int * array = new int [5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    return array;
}
int main()
{
    int* x = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    return 0; 
}