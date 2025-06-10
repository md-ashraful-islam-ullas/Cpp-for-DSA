# include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char c[100];
    cin.getline(c,100);
    cout << x << endl << c << endl;

    // string s;
    // cin >> s;
    // cout << s;
    return 0;
}