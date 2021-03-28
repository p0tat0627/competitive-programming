#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    ll n, k, c = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        c = 0;
        //idea is to surely make n divisible by k
        //and to do that
        //we need to mod n by k to count the subtractions
        //then new n surely will be divisible
        while (n)
        {
            c += n % k;
            n /= k;
            c++;
        }
        cout << c - 1 << endl;
    }
    return 0;
}
