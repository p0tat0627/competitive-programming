
#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

int m, s, a[105], b[105];
string minx = "", maxx = "";

int main()
{
    cin >> m >> s;

    if (s == 0)
    {
        cout << (m == 1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }

    else if (m * 9 < s || s == 0)
        printf("-1 -1\n");

    else
    {
        int ss = s - 1;

        memset(a, 0, sizeof(a));

        for (int i = 0; i < m; i++)
            a[i] = min(s, 9), s -= a[i];

        //getting the other value
        for (int i = 0; i < m; i++)
            maxx += (a[i] + '0');

        //getting the minimum value
        memset(b, 0, sizeof(b));

        b[0] = 1;
        for (int i = m - 1; i > 0; i--)
            b[i] = min(ss, 9), ss -= b[i];

        if (ss)
            b[0] += ss;

        for (int i = 0; i < m; i++)
            minx += (b[i] + '0');

        cout << minx << " " << maxx << endl;
        return 0;
    }
}
