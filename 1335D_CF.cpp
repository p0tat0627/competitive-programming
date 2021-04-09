/* In the name of ALLAH */
// Anti Sudoku

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    t *= 9;

    while (t--)
    {
        cin >> str;
        replace(str.begin(), str.end(), '2', '1');
        cout << str << endl;
    }
    return 0;
}