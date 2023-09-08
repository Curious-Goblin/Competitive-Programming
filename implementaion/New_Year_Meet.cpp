#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// time complexity o(nlogn) space complexity o(1)
int main(){
    int x1,x2,x3,result;
    cin>>x1>>x2>>x3;
    vector<int> coordinates;
    coordinates.push_back(x1);
    coordinates.push_back(x2);
    coordinates.push_back(x3);
    sort(coordinates.begin(),coordinates.end());
    result=(coordinates[1]-coordinates[0])+(coordinates[2]-coordinates[1]);
    cout<<result;
    return 0;
}