# include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[100005];
    while(cin.getline(c,100005))
    {
        char s[100005];
        int counter = 0;
        for(int i = 0; i < strlen(c); i++)
        {
            if (c[i] != ' ')
            {
                s[counter] = c[i];
                counter++;
            }
        }

        // s[counter] = '\0';
        sort(s,s+counter);
        cout << s << endl;
    }
    return 0; 
}