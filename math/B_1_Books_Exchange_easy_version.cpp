#include <bits/stdc++.h>

using namespace std;

vector<int> solve(int n, vector<int> indexes)
{
    int j = 0;
    bool flag = false;
    vector<vector<int>> vec;
    vector<int> result(n, 0);
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (unsigned int k = 0; k < vec.size(); k++)
        {
            auto it = find(vec[k].begin(), vec[k].end(), indexes[i]);
            if (it != vec[k].end())
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            flag = false;
            continue;
        }
        else if (indexes[i] == (i + 1))
        {
            vec.push_back({i + 1});
        }
        else
        {
            j = indexes[i] - 1;
            temp.push_back(indexes[i]);
            while (indexes[j] != (i + 1))
            {
                j = indexes[j] - 1;
                temp.push_back(indexes[j]);
            }
            temp.push_back(indexes[j]);
            vec.push_back(temp);
        }
    }
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        for (unsigned int j = 0; j < vec[i].size(); j++)
        {
            result[vec[i][j] - 1] = vec[i].size();
        }
    }
    return result;
}

vector<int> solve1(int n, vector<int> indexes)
{
    int j = 0;
    bool flag = false;
    vector<set<int>> vec;
    vector<int> result(n, 0);
    for (int i = 0; i < n; i++)
    {
        set<int> temp;
        for (unsigned int k = 0; k < vec.size(); k++)
        {
            auto it = vec[k].find(indexes[i]);
            if (it != vec[k].end())
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            // cout<<1<<endl;
            flag = false;
            continue;
        }
        else if (indexes[i] == (i + 1))
        {
            vec.push_back({i + 1});
        }
        else
        {
            j = indexes[i] - 1;
            temp.insert(indexes[i]);
            while (indexes[j] != (i + 1))
            {
                j = indexes[j] - 1;
                temp.insert(indexes[j]);
            }
            temp.insert(indexes[j]);
            vec.push_back(temp);
        }
    }
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        for (auto it = vec[i].begin(); it != vec[i].end(); ++it)
        {
            // result[*it - 1] = vec[i].size();
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<int> indexes;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            indexes.push_back(a);
        }
        vector<int> result = solve(n, indexes);
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}