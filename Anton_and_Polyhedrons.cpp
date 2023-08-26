#include<iostream>
#include<vector>
#include<string>
#include <unordered_map>
using namespace std;

int main(){
    int n,numberOfFaces=0;
    string a;
    vector<string> polyhedrons;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        polyhedrons.push_back(a);
    }
    unordered_map<string,int> numberOfSides;
    numberOfSides["Tetrahedron"]=4;
    numberOfSides["Cube"]=6;
    numberOfSides["Octahedron"]=8;
    numberOfSides["Dodecahedron"]=12;
    numberOfSides["Icosahedron"]=20;
    for(int i=0;i<n;i++)
    {
        numberOfFaces=numberOfFaces+numberOfSides[polyhedrons[i]];
    }
    cout<<numberOfFaces;
    return 0;
}