# include<iostream>
# include<vector>
using namespace std;
int HighestAltitude(vector<int>gain)
{
    int altitude = 0;
    int HighestAltitude= 0;
    for(int i=0; i<gain.size();i++)
    {
        altitude=altitude+gain[i];
        HighestAltitude=max(HighestAltitude,altitude);

    }
    return HighestAltitude;
}
int main()
{
vector<int>gain={-5,1,5,0,-7};
int k= HighestAltitude(gain);
cout<<k;
}