#include<iostream>
# include<vector>
using namespace std;
int MostWater(vector<int>arr)
{
    int i=0; 
    int j =arr.size()-1;
   
    int maxArea =0;
    while(i<j)
    {
        int area =0;
        int w = j-i;
        int h = min(arr[i],arr[j]);
        area =w*h;
        if(arr[i]<=arr[j])
        {
            i++;
        }
        else{
            j--;
        }
        maxArea =max(area,maxArea);
       
    }
    return maxArea;
}
int main()
{
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int area = MostWater(height);
    cout<<area;
}