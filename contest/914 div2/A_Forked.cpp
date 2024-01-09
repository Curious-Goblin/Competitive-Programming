#include <iostream>
#include <vector>
#include <set>
using namespace std;

int solve(int a, int b, int k[2], int q[2])
{
    int count = 0;
    set<pair<int, int>> king, queen;
    king.insert({k[0] + b, k[1] + a});
    king.insert({k[0] + a, k[1] + b});
    king.insert({k[0] + b, k[1] - a});
    king.insert({k[0] + a, k[1] - b});
    king.insert({k[0] - b, k[1] + a});
    king.insert({k[0] - a, k[1] + b});
    king.insert({k[0] - b, k[1] - a});
    king.insert({k[0] - a, k[1] - b});

    queen.insert({q[0] + b, q[1] + a});
    queen.insert({q[0] + a, q[1] + b});
    queen.insert({q[0] + b, q[1] - a});
    queen.insert({q[0] + a, q[1] - b});
    queen.insert({q[0] - b, q[1] + a});
    queen.insert({q[0] - a, q[1] + b});
    queen.insert({q[0] - b, q[1] - a});
    queen.insert({q[0] - a, q[1] - b});

    for (auto pair1 : king)
    {
        for (auto pair2 : queen)
        {
            if (pair1 == pair2)
            {
                count++;
            }
        }
    }
    return count;
}

int solve1(int posMove1, int posMove2, int kingX, int kingY, int queenX, int queenY)
{

    vector<pair<int, int>> king(8);
    king[0].first = kingX + posMove1;
    king[0].second = kingY + posMove2;
    king[1].first = kingX + posMove2;
    king[1].second = kingY + posMove1;

    king[2].first = kingX - posMove1;
    king[2].second = kingY - posMove2;
    king[3].first = kingX - posMove2;
    king[3].second = kingY - posMove1;

    king[4].first = kingX - posMove1;
    king[4].second = kingY + posMove2;
    king[5].first = kingX - posMove2;
    king[5].second = kingY + posMove1;

    king[6].first = kingX + posMove1;
    king[6].second = kingY - posMove2;
    king[7].first = kingX + posMove2;
    king[7].second = kingY - posMove1;
    set<pair<int, int>> sKing;
    for (auto it : king)
    {
        sKing.insert(it);
    }

    vector<pair<int, int>> queen(8);
    queen[0].first = queenX + posMove1;
    queen[0].second = queenY + posMove2;
    queen[1].first = queenX + posMove2;
    queen[1].second = queenY + posMove1;

    queen[2].first = queenX - posMove1;
    queen[2].second = queenY - posMove2;
    queen[3].first = queenX - posMove2;
    queen[3].second = queenY - posMove1;

    queen[4].first = queenX - posMove1;
    queen[4].second = queenY + posMove2;
    queen[5].first = queenX - posMove2;
    queen[5].second = queenY + posMove1;

    queen[6].first = queenX + posMove1;
    queen[6].second = queenY - posMove2;
    queen[7].first = queenX + posMove2;
    queen[7].second = queenY - posMove1;
    set<pair<int, int>> sQueen;
    for (auto it : queen)
    {
        sQueen.insert(it);
    }

    int count = 0;
    for (auto pair1 : sKing)
    {
        for (auto pair2 : sQueen)
        {
            if (pair1 == pair2)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    // while (true)
    // {
    //     int a = rand() % 10 + 2;
    //     int b = rand() % 10 + 2;
    //     int k[2], q[2];
    //     for (int i = 0; i < 2; i++)
    //     {
    //         k[i] = rand() % 10 + 2;
    //         q[i] = rand() % 10 + 2;
    //     }
    //     int res1=solve(a, b, k, q);
    //     int res2=solve1(a, b, k[0], k[1], q[0], q[1]);
    //     if (res1 == res2)
    //     {
    //         cout << "ok" << endl;
    //     }
    //     else
    //     {
    //         cout << "wrong" << endl;
    //         cout<<"solve "<<res1<<endl;
    //         cout<<"solve1 "<<res2<<endl;
    //         cout << a << " " << b << endl;
    //         cout << k[0] << " " << k[1] << endl;
    //         cout << q[0] << " " << q[1] << endl;
    //         break;
    //     }
    // }

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k[2], q[2];
        cin >> a >> b;
        cin >> k[0] >> k[1] >> q[0] >> q[1];
        int res = solve(a, b, k, q);
        cout << res << endl;
        // solve1(a,b,k[0],k[1],q[0],q[1]);
    }
    return 0;
}