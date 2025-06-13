# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].id;
    }

    char sec[n];
    for (int i = 0; i < n; i++) 
    {
        sec[i] = array[i].section;
    }
    reverse(sec, sec+n);
    for (int i = 0; i < n; i++) 
    {
        array[i].section = sec[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].cls << " " << array[i].section << " " << array[i].id << endl;
    }
    return 0; 
}