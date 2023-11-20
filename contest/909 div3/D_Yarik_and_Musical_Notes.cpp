#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int i = 0;
    while (i <= 1000)
    {
        i++;
        int a = rand() % 10;
        int b = rand() % 10;
        long long int x = pow(pow(2, a), pow(2, b));
        long long int y = pow(pow(2, b), pow(2, a));
        // cout << "hi" << endl;
        if (x == y && a != b)
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}