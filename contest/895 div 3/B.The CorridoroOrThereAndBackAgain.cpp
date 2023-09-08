#include <iostream>
#include <unordered_map>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> traps;
        pair<int, int> temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp.first >> temp.second;
            traps.push_back(temp);
        }
        int door = 1;
        vector<int> maxDoor;
        for (int i = 0; i < n; i++)
        {
            door = traps[i].first;
            maxDoor.push_back(door + (traps[i].second - 1) / 2);
        }
        auto minElement=min_element(maxDoor.begin(),maxDoor.end());
        int result = *minElement;
        cout<<result<<endl;
    }

    return 0;
}