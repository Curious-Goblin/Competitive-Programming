#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, a, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    vector<vector<int>> coordinates;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 3; j++)
        {
            cin >> a;
            temp.push_back(a);
        }
        coordinates.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++)
        {
            if(j==0)
            {
                sum1+=coordinates[i][j];
            }   
            else if(j==1)
            {
                sum2+=coordinates[i][j];
            }
            else if(j==2)
            {
                sum3+=coordinates[i][j];
            }
        }
    }
    if(sum1==0 && sum2==0 && sum3 == 0) 
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}