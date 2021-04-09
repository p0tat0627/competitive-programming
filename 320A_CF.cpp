#include <iostream>
#include <regex>
#include <string>
using namespace std;

string s;

int main()
{
    cin >> s;
    regex match("((1)|(14)|(144))*");
    cout << (regex_match(s, match) ? "YES" : "NO");
    return 0;
}