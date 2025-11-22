# include<iostream>
# include<vector>
using namespace std;
vector<int>productArray(vector<int>arr)
{
    int n= arr.size();
    vector<int>ans(n,1);
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=prefix[i]*suffix[i];
    }
    return arr;
}
int main(){
    vector<int>arr1={1,2,3,4};
    vector<int>arr2=productArray(arr1);
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<" ";
    }

}