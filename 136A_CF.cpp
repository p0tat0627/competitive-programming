/* In the name of ALLAH */
// presents

#include <iostream>
using namespace std;

int main()
{
    int n, p, arr[100];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        arr[p] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}