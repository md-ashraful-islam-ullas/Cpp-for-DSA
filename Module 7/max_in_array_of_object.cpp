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
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].marks;
        if (array[i].marks > mx.marks)
        {
            mx = array[i];
        }
    }

    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    return 0; 
}