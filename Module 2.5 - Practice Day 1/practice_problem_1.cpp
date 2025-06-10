# include <bits/stdc++.h>
using namespace std;

int* get_array(int n)
{
    int* array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    return array;
}
int main()
{
    int n;
    cin >> n;
    int* array = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0; 
}