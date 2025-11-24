#include<iostream>
#include<vector>
using namespace std;
vector<int> MovesZeros(vector<int> nums){
    vector<int>arr;
    int n= nums.size();
    int i=0;
    while(i<n)
    {
        if(nums[i]!=0)
        {
            arr.push_back(nums[i]);

        }
        i++;
    }
    while(arr.size()<n)
    {
        arr.push_back(0);

    }
return arr;
}
int main()
{
vector<int>arr={0,1,0,3,12};
vector<int> arr1 = MovesZeros(arr);
for(int i=0; i<arr1.size();i++)
{
    cout<<arr1[i];
}
}