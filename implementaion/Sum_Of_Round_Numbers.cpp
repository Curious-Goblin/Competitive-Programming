#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<pair<int, vector<int>>> SumOfRoundNumbers(vector<int> &nums)
{
    vector<pair<int, vector<int>>> RoundNums;
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        pair<int, vector<int>> temp;
        vector<int> q;
        int b=nums[i];
        int r = 1, a = 1;
        while (b != 0)
        {
            if (b % 10 != 0)
            {
                r = r * (b % 10);
                q.push_back(r);
            }
            a = a * 10;
            b /= 10;
            r = a;
        }
        if (q.size() != 0)
        {
            temp.first = q.size();
            temp.second = q;
        }
        else
        {
            temp.first = 1;
            q.push_back(nums[i]);
            temp.second = q;
        }
        RoundNums.push_back(temp);
    }
    return RoundNums;
}

int main()
{
    int t, a;
    cin >> t;
    vector<int> nums;
    while (t--)
    {
        cin >> a;
        nums.push_back(a);
    }
    vector<pair<int, vector<int>>> result = SumOfRoundNumbers(nums);
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        cout << result[i].first << endl;
        for (unsigned int j = 0; j < result[i].second.size(); j++)
        {
            cout << result[i].second[j] << " ";
        }
        cout << endl;
    }
    return 0;
}