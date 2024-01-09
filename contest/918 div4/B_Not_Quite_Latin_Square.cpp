#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char a;
    while (t--)
    {
        vector<int> comparator = {65, 66, 67};
        char matrix[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a;
                matrix[i][j] = a;
            }
        }
        char p, q, r;
        for (int i = 0; i < 3; i++)
        {
            p = matrix[i][0];
            q = matrix[i][1];
            r = matrix[i][2];
            if (p == '?' || q == '?' || r == '?')
            {
                for (int j = 0; j < 3; j++)
                {
                    if (comparator[j] == static_cast<int>(p) || comparator[j] == static_cast<int>(q) || comparator[j] == static_cast<int>(r))
                    {
                        comparator[j] = 0;
                    }
                }
            }
            else
            {
                continue;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (comparator[i] != 0)
            {
                char b = static_cast<char>(comparator[i]);
                cout << b << endl;
                // break;
            }
        }
    }
    return 0;
}