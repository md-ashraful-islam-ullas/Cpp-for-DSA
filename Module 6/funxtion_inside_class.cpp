# include <bits/stdc++.h>
using namespace std;
class Student
{   
    public:
    string name;
    int roll;
    char section;
    int math;
    int english;

    Student(string name, int roll, char section, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math = math;
        this->english = english;
    }

    void total_marks()
    {
        int total_mark = math + english;
        cout << "Hello " << name << "." << "Your total mark is " << total_mark << endl;
    }
};  
int main()
{
    Student ash("Ashraful Islam", 78, 'A', 87, 89);
    Student nok("Nafisa Nokshi", 77, 'A', 89, 91);

    ash.total_marks();
    nok.total_marks();
    return 0; 
}