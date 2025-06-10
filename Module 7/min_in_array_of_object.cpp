# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student array[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].marks;
        mn = min(mn,array[i].marks);

    }

    cout << mn << endl;
    return 0; 
}