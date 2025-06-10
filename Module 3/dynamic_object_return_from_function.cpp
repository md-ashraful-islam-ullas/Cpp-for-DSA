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
    Student* Ash = new Student(12,78,3.13);  // Dynamic Object
    return Ash;
}
int main()
{
    Student* Obj = fun();

    cout << Obj->cls << " " << Obj->roll << " " << Obj->gpa << endl;
    return 0; 
}