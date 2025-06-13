# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

};
bool comp(Student l, Student r)
{
    if ((l.math_marks+l.eng_marks) > (r.math_marks+r.eng_marks)) return true;
    else if ((l.math_marks+l.eng_marks) < (r.math_marks+r.eng_marks)) return false;
    else return l.id < r.id;
}
int main()
{
    int n;
    cin >> n;
    Student array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].id >> array[i].math_marks >> array[i].eng_marks;
    }
    sort (array, array+n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].cls << " " << array[i].section << " " << array[i].id << " " << array[i].math_marks << " " << array[i].eng_marks << endl;
    }
    return 0; 
}