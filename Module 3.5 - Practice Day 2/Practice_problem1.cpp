# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student Ash("Ashraful",78,'A',96,12);
    Student Nok("Nokshi",77,'A',98,12);
    Student Saba("Suha",282,'A',99,12);

    int mx = max({Ash.math_marks, Nok.math_marks, Saba.math_marks});

    if (mx == Ash.math_marks) cout << Ash.name << endl;
    else if (mx == Nok.math_marks) cout << Nok.name << endl;
    else if (mx == Saba.math_marks) cout << Saba.name << endl;
    return 0; 
}