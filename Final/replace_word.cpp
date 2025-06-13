# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, x;
        cin >> s >> x;
        
        while (1)
        {
            int index = s.find(x);

            if (index != -1)
            {
                s.erase(index, x.size());
                s.insert(index, "#");
            }
            else break;
        }
        cout << s << endl;
    }
    return 0; 
}