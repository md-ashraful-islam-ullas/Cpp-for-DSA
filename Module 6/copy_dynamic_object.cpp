# include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    string country;

    Cricketer(int jersey_no, string country)
    {
        this->jersey_no = jersey_no;
        this->country = country;
    }
};
int main()
{
    Cricketer* dhoni = new Cricketer(77, "India");
    Cricketer* kohli = new Cricketer(18, "India");
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey_no << endl;
    return 0; 
}