#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxNumber(vector<int>arr,int target)
{
    int counting=0;
   sort(arr.begin(),arr.end());
   int i=0;
   int j= arr.size()-1;
   while(i<j)
   {
    if(arr[i]+arr[j]==target)
    {
        counting++;
        i++;
        j--;
    }
    else{
        i++;
        j--;
    }
   }
   return counting;
}
int main()
{
    vector<int>arr1={1,2,3,4};
    int t=5;
    int s=MaxNumber(arr1,t);
    cout<<s;

}