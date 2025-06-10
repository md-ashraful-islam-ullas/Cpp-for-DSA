# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }

};

Student* fun()
{
    Student Ash(12,78,3.13);    // Static Object
    Student* p = &Ash;
    return p;
}
int main()
{
    Student* Obj = fun();

    cout << Obj->cls << " " << Obj->roll << " " << Obj->gpa << endl;
    return 0; 
}