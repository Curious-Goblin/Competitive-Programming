#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int maxIndex = 0;
    int minIndex = n - 1;
    int SoldierPositions[n];
    for (int i = 0; i < n; i++)
    {
        cin >> SoldierPositions[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (SoldierPositions[i] > SoldierPositions[maxIndex])
        {
            maxIndex = i;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (SoldierPositions[i] < SoldierPositions[minIndex])
        {
            minIndex = i;
        }
    }
    while (true)
    {
        if (maxIndex != 0)
        {
            // cout<<maxIndex<<endl;
            swap(SoldierPositions[maxIndex], SoldierPositions[maxIndex - 1]);
            count++;
            maxIndex--;
            if(maxIndex==minIndex)
            { 
                minIndex++;
            }
        }
        if (minIndex != (n - 1))
        {
            // cout<<minIndex<<endl;
            swap(SoldierPositions[minIndex], SoldierPositions[minIndex + 1]);
            count++;
            minIndex++;
            if(minIndex==maxIndex)
            { 
                maxIndex--;
            }
        }
        else
        {
            cout<<count<<endl;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<SoldierPositions[i]<<" "; 
    }

    return 0;
}