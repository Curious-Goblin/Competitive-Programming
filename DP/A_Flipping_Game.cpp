#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, a;
    vector<int> vec1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec1.push_back(a);
    }
    int count = 0, count1 = 0, max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec1[i] == 0)
        {
            count++;
        }
        else if (vec1[i] == 1)
        {
            count1++;
            max_count = max(max_count, count);
            count = 0;
        }
    }
    max_count = max(max_count, count);
    if (max_count == 0)
    {
        cout << count1 - 1 << endl;
    }
    else
    {
        max_count += count1;
        cout << max_count << endl;
    }
    return 0;
}