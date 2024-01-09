#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = INT64_MIN, second_max = INT64_MIN;
        cin >> n;
        string s;
        cin >> s;
        vector<int> hash(122, 0);
        for (int i = 0; i < n; i++)
        {
            hash[static_cast<int>(s[i])]++;
        }
        do
        {
            hash[max]--;
            hash[second_max]--;
            for (int i = 0; i < 122; i++)
            {
                if (hash[i] != 0)
                {
                    if (hash[i] >= hash[max])
                    {
                        max = i;
                    }
                }
            }
            // cout<<hash[max]<<endl;
            for (int i = 0; i < 122; i++)
            {
                if (hash[i] != 0)
                {
                    if (i != max && hash[i] >= hash[second_max])
                    {
                        second_max = i;
                    }
                }
            }
            // cout<<hash[second_max]<<endl;
        } while (hash[second_max] != 0);
        cout<<hash[max]<<endl;
    }
}
