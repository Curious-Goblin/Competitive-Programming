#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string hate = "I hate";
    string that = "that";
    string love = "I love";
    string it = "it";
    string result;
    // n=n-1;
    int a = n;
    while (a > 0)
    {
        if (n % 2 != 0)
        {
            if (a % 2 != 0)
            {
                result = result + " " + hate;
            }
            else
            {
                result = result + " " + love;
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                result = result + " " + hate;
            }
            else
            {
                result = result + " " + love;
            }
        }
        if (a != 1)
        {
            result = result + " " + that;
        }
        a--;
    }
    result = result + " " + it;
    cout << result;
    return 0;
}