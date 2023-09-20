#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int a=0, b=0, c=0, d=0,year;
    while (!((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)))
    {
        y++;
        year=y;
        a = year / 1000;
        year %= 1000;
        b = year / 100;
        year %= 100;
        c = year / 10;
        year %= 10;
        d = year;
    }
    cout<<y;
    return 0;
}