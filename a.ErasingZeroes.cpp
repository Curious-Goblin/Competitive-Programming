#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int starting_index = 0, last_index = 0, count = 0;
        string s;
        cin >> s;
        for (unsigned int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                starting_index = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                last_index = i;
                break;
            }
        }
        for (int i = starting_index; i < last_index; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}