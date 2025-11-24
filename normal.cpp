# include <iostream>
# include<vector>
using namespace std;
bool normal(vector<int>arr)
{
int first = INT_MAX;
        int second = INT_MAX;

        for (int x : nums) {
            if (x <= first) {
                first = x;           // smallest seen so far
            }
            else if (x <= second) {
                second = x;          // second smallest
            }
            else {
                return true;         // x > second ⇒ triplet exists
            }
        }
        return false;
}
int main(){
    vector<int>arr={0,4,2,1,0,-1,-3};
    int num = normal(arr);
    cout<<num;

}