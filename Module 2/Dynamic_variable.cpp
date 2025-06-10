# include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x = new int;
    *x = 100;
    p = x;
    cout << "fun func >" << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "main func >" << *p << endl;
    return 0; 
}