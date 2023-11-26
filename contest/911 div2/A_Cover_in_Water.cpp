#include <iostream>
#include <vector>
using namespace std;

void solve(int n, vector<char> cells)
{
    int count = 0, max_count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (cells[i] == '.' && cells[i + 1] == '.' && cells[i + 2] == '.')
        {
            count = 1;
            break;
        }
    }

    if (count == 1)
    {
        cout << 2 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (cells[i] == '.')
            {
                max_count++;
            }
        }
        cout << max_count << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char s;
        cin >> n;
        vector<char> cells;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            cells.push_back(s);
        }
        solve(n, cells);
    }
}