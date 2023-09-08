#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c;
        int count=0;
        cin >> a >> b >> c;
        while (a!=b)
        {
            if (a > b)
            {
                float d = (a - b) / 2;
                if (c > d)
                {
                    a = a - d;
                    b = b + d;
                }
                else
                {
                    a = a - c;
                    b = b + c;
                }
                count++;
            }
            else if (b > a)
            {
                float d = (b - a) / 2;
                if (c > d)
                {
                    b = b - d;
                    a = a + d;
                }
                else
                {
                    b = b - c;
                    a = a + c;
                }
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}