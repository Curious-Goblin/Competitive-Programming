#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve(int n, vector<int> points)
{
    int score = 0;
    sort(points.begin(), points.end());
    auto front = points.begin();
    auto back = points.end() - 1;
    vector<pair<int, int>> result;
    while (front < back)
    {
        result.push_back(make_pair(*front, *back));
        front++;
        back--;
    }
    for (int i = 0; i < (n - 1); i++)
    {
        score = score + abs((result[i].first) - result[i + 1].first) + abs((result[i].second) - result[i + 1].second);
    }
    cout << score << endl;
    for (unsigned int i = 0; i < result.size(); i++)
    {
        cout << result[i].first << " " << result[i].second << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<int> points;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a;
            points.push_back(a);
        }
        solve(n, points);
    }
    return 0;
}