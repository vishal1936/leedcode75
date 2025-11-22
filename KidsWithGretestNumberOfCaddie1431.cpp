# include<iostream>
# include<vector>
using namespace std;
vector<bool> extraGreates(vector<int>arr,int extra)
{
    vector<bool>arr1;
    int maximum =0;
    int i=0; 
    while(i<arr.size())
    {
        maximum= max(maximum,arr[i]);
        i++;
    }
    i=0;
    while(i<arr.size())
    {
        if(arr[i] + extra >maximum)
        {
            arr1.push_back(true);
        }
        else
        {
            arr1.push_back(false);
        }
        i++;
    }
    return arr1;
}

int main()
{
vector<int> candies = {12,1,12};
int extraCandies = 10;
vector<bool> arr2 = extraGreates(candies, extraCandies);
 for(bool val : arr2)
    {
        cout << val << " ";
    }

}