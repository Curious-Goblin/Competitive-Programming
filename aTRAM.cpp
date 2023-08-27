#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// TIME COMPLEXITY = O(LOG(N)) SPACE COMPLEXITY = O(1)
int main()
{
    int n, noOfPassengers = 0,maxNoOfPassengers=0;
    cin >> n;
    vector<pair<int, int>> noOfPassengersEnteringAndLeaving;
    pair<int, int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> a.first >> a.second;
        noOfPassengersEnteringAndLeaving.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        noOfPassengers = noOfPassengers + noOfPassengersEnteringAndLeaving[i].second - noOfPassengersEnteringAndLeaving[i].first;
        if(noOfPassengers>maxNoOfPassengers)
        {
            maxNoOfPassengers=noOfPassengers;
        }
    }
    cout<<maxNoOfPassengers;
    return 0;
}