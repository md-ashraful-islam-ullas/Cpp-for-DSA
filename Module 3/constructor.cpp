# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }

};

int main()
{
    Student Ash(12,78,3.13);
    Student Nokshi(12,77,3.89);

    cout << Ash.cls << " " << Ash.roll << " " << Ash.gpa << endl;
    cout << Nokshi.cls << " " << Nokshi.roll << " " << Nokshi.gpa << endl;
    return 0; 
}