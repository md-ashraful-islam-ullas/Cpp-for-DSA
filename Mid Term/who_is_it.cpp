# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int ID;
    char name[101];
    char section;
    int marks;

};
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        Student a, b, c;
        cin >> a.ID >> a.name >> a.section >> a.marks;
        cin >> b.ID >> b.name >> b.section >> b.marks;
        cin >> c.ID >> c.name >> c.section >> c.marks;

        int mx = max({a.marks,b.marks,c.marks});
        int count = 0;
        if (mx == a.marks) count++;
        if (mx == b.marks) count++;
        if (mx == c.marks) count++;

        if (count == 1)
        {
            if (mx == a.marks)
            {
                cout << a.ID << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
            else if (mx == b.marks)
            {
                cout << b.ID << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
            else if (mx == c.marks)
            {
                cout << c.ID << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
        }
        else if (count > 1)
        {
            int smlID = 4;

            if (a.marks == mx && a.ID < smlID)
            {
                smlID = a.ID;
            }
            if (b.marks == mx && b.ID < smlID)
            {
                smlID = b.ID;
            }
            if (c.marks == mx && c.ID < smlID)
            {
                smlID = c.ID;
            }

            if (smlID == a.ID)
            {
                cout << a.ID << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
            else if (smlID == b.ID)
            {
                cout << b.ID << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
            else if (smlID == c.ID)
            {
                cout << c.ID << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
        }
    }
    return 0; 
}