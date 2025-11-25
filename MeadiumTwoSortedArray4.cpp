#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
double MeadiumSortedArray(vector<int>arr1,vector<int>arr2)
{
    int n= arr1.size();
    int m= arr2.size();
    vector<int>arr3;
    for(int i=0; i<n; i++)
    {
        arr3.push_back(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        arr3.push_back(arr2[i]);
    }
    sort(arr3.begin(),arr3.end());
    int totel=m+n;
     if(totel%2==0)
     {
        return (arr3[totel/2-1]+arr3[totel/2])/2.0;
     }
     else
     {
        return arr3[totel/2];
     }

}
int main()
{
vector<int>arr1={1,2,4};
vector<int>arr2 ={3};
double k=MeadiumSortedArray(arr1,arr2);
cout<<k;

}