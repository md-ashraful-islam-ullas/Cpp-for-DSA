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
        // (*this).cls = cls;
        this->cls = cls;
        // (*this).roll = roll;
        this->roll = roll;
        // (*this).gpa = gpa;
        this->gpa = gpa;
    }

};

int main()
{
    Student Ash(12,78,3.13);
    Student* Nokshi = new Student(12,77,3.89);   // Dynamic Object.

    cout << Ash.cls << " " << Ash.roll << " " << Ash.gpa << endl;
    cout << Nokshi->cls << " " << Nokshi->roll << " " << Nokshi->gpa << endl;
    return 0; 
}