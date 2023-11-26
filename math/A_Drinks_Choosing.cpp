#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, n, k, setSize, count = 0, good = 0, bad = 0;
    cin >> n >> k;
    vector<int> fav_drinks;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        fav_drinks.push_back(a);
    }
    if (n % 2 == 0)
    {
        setSize = n / 2;
    }
    else
    {
        setSize = (n + 1) / 2;
    }
    a = setSize;
    int hashArr[k + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hashArr[fav_drinks[i]]++;
    }
    for (int i = 0; i <= k; i++)
    {
        if (hashArr[i] % 2 == 0)
        {
            good += hashArr[i];
        }
        else
        {
            good += (hashArr[i] - 1);
            bad += 1;
        }
    }
    if (bad % 2 == 0)
    {
        count = good + (bad / 2);
    }
    else
    {
        count = good + ((bad + 1) / 2);
    }
    cout << count << endl;
    return 0;
}