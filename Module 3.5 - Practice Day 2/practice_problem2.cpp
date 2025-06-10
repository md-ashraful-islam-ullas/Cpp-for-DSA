# include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    string country;
};
int main()
{
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    Cricketer* kholi = new Cricketer;
    kholi->jersey_no = dhoni->jersey_no;
    // delete dhoni;
    cout << kholi->jersey_no << " " << kholi->country;
    return 0; 
}