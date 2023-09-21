#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int points = 0;
        vector<vector<char>> target;
        for (int i = 0; i < 10; i++)
        {
            vector<char> temp;
            char a;
            for (int j = 0; j < 10; j++)
            {
                cin >> a;
                temp.push_back(a);
            }
            target.push_back(temp);
        }
        // for (int i = 0; i < 10; i++)
        // {
        //     for (int j = 0; j < 10; j++)
        //     {
        //         cout << target[i][j];
        //     }
        //     cout << endl;
        // }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if ((i == 0 || i == 9 || j == 0 || j == 9) && (target[i][j] == 'X'))
                {
                    points = points + 1;
                }
                else if ((((i == 1 || i == 8) && (j > 0 && j < 9)) || ((j == 1 || j == 8) && (i > 0 && i < 9))) && (target[i][j] == 'X'))
                {
                    points = points + 2;
                }
                else if ((((i == 2 || i == 7) && (j > 1 && j < 8)) || ((j == 2 || j == 7) && (i > 1 && i < 8))) && (target[i][j] == 'X'))
                {
                    points = points + 3;
                }
                else if ((((i == 3 || i == 6) && (j > 2 && j < 7)) || ((j == 3 || j == 6) && (i > 2 && i < 7))) && (target[i][j] == 'X'))
                {
                    points = points + 4;
                }
                else if ((((i == 4 || i == 5) && (j > 3 && j < 6)) || ((j == 4 || j == 5) && (i > 3 && i < 6))) && (target[i][j] == 'X'))
                {
                    points = points + 5;
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}