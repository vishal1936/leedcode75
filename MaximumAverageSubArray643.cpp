#include<iostream>
#include<vector>
using namespace std;
float MaximumAverage(vector<int>arr,int k)
{
 int window=0;
        for(int i=0; i<k;i++)
        {
            window +=arr[i];
        }
       double maxAvg= (double)window / k;
         for(int i=k; i<arr.size();i++)
         {
            window = window + arr[i] - arr[i-k];
           maxAvg = max(maxAvg, (double)window / k);
         }
         return maxAvg;
    return maxAvg;
}
int main(){
vector<int>arr1={1,2,3,4};
int b=4;
float k =MaximumAverage(arr1,b);
cout<<k;
}