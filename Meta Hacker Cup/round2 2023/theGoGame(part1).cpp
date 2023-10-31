#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t, p = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        int a;
        char b;
        cin >> n >> m;
        vector<vector<int>> board;
        vector<vector<int>>board1;
        vector<vector<int>>board2;
        vector<vector<int>>board3;
        for (int i = 0; i < n + 2; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m + 2; j++)
            {
                if ((i == 0) || (i == (n + 1)))
                {
                    a = 2;
                    temp.push_back(a);
                }
                else if ((j == 0) || (j == (m + 1)))
                {
                    a = 2;
                    temp.push_back(a);
                }
                else
                {
                    cin >> b;
                    if (b == 'B')
                    {
                        temp.push_back(2);
                    }
                    else if (b == 'W')
                    {
                        temp.push_back(10);
                    }
                    else if (b == '.')
                    {
                        temp.push_back(-1);
                    }
                }
            }
            board.push_back(temp);
        }
        board1=board;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(board[i][j]==10)
                {
                    board1[i][j]=board[i][j]+board[i-1][j]+board[i+1][j]+board[i][j+1]+board[i][j-1];
                }
            }
        }
        for(int i=0;i<n+2;i++)
        {
            for(int j=0;j<m+2;j++)
            {
                cout<<board1[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}