#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// void solve(int n, vector<vector<int>> nums)
// {
//     pair<int, int> m;
//     m.first = 0;
//     m.second = 0;
//     int a = 0, b = 0;
//     vector<int> vec_min;
//     for (int i = 0; i < n; i++)
//     {
//         sort(nums[i].begin(), nums[i].end());
//         b += nums[i][0];
//         vec_min.push_back(nums[i][0]);
//     }
//     sort(vec_min.begin(), vec_min.end());
//     int avg = b / n;
//     for (int i = 0; i < n; i++)
//     {
//         if (abs(avg - nums[i][0]) < m.first)
//         {
//             m.second = i;
//         }
//         else if (abs(avg - nums[i][0]) == m.first)
//         {
//             if (nums[m.second][0] > nums[i][0])
//             {
//                 m.second = i;
//             }
//             else if(nums[m.second][0]==nums[i][0]){}
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i != m.second)
//         {
//             a += nums[i][1];
//             cout << nums[i][1] << endl;
//         }
//         else
//         {
//             a += vec_min[0];
//             cout << vec_min[0] << endl;
//         }
//     }
//     cout << "Minmum_index=" << m.second << endl;

//     cout << a << endl ;
// }

void solve1(long long int n, vector<vector<long long int>> nums)
{
    long long int index=0,sum=0;
    vector<long long int> vec;
    for(int i=0;i<n;i++)
    {
        sort(nums[i].begin(),nums[i].end());
        vec.push_back(nums[i][0]);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
    {
        if(nums[i][1]<nums[index][1])
        {
            index=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i!=index)
        {
            sum+=nums[i][1];
        }
        else
        {
            sum+=vec[0];
        }
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, m;
        cin >> n;
        vector<vector<long long int>> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            vector<long long int> temp;
            for (int i = 0; i < m; i++)
            {
                cin >> a;
                temp.push_back(a);
            }
            nums.push_back(temp);
        }
        solve1(n, nums);
    }
    return 0;
}