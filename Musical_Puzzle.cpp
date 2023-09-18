#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        set < pair < char , char > > sp;
        int n ;
        string s;
        cin >> n;
        cin >> s;
        for(int i = 0 ; i < s.size() - 1; i++)
        {
            char x , y;
            x = s[i];
            y = s[i + 1];
            sp.insert({x , y});
        }
        cout << sp.size() << endl;
    }
    return 0;
}
