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
    cin.ignore();
    Student array[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, array[i].name);
        cin >> array[i].roll >> array[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }
    return 0; 
}