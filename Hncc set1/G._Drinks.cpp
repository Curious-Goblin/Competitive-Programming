#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;



int main()
{
    int n;
    double a;
    cin >> n;
    vector<double> nums;
    float val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        val = val + (nums[i]) / 100.0;
    }
    double percent = (val / n) * 100.0;
    cout << fixed << setprecision(12);
    cout << percent << endl;
    return 0;
}
