#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = "#";
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i % 2) != 0)
        {
            for (int j = 0; j < m; j++)
            {

                if (index == 0)
                {
                    if (j != (m - 1))
                    {
                        arr[i][j] = ".";
                    }
                }
                else if (index == 1)
                {
                    if (j != 0)
                    {
                        arr[i][j] = ".";
                    }
                }
            }
            index = (index + 1) % 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}