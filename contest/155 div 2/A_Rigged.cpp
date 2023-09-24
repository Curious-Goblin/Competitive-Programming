#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, e;
        cin >> n;
        vector<pair<int, int>> athlete;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> temp;
            cin >> s;
            temp.first = s;
            cin >> e;
            temp.second = e;
            athlete.push_back(temp);
        }
        int count=0;
        for(int i=1;i<n;i++)
        {
            if((athlete[0].first<=athlete[i].first)&&(athlete[i].second>=athlete[0].second))
            {
                count++;
            }
        }
        if(count>=1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<athlete[0].first<<endl;
        }
    }
    return 0;
}