#include<iostream>
#include<algorithm>
using namespace std;
bool isVovel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        return  true;
    }
    else
    {
        return false;
    }
}
string reverseVovel(string s)
{
    int start = 0;
        int end= s.size()-1;
        while(start<end)
        {
            while(start<s.size() && !isVovel(s[start]))
            {
                start++;
            }
            while(end>0&& !isVovel(s[end]))
            {
                end--;
            }
            if(start<end)
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }

        }
        return s;
}
int main()
{
    string s="leetcode";
    string  str = reverseVovel(s);
    cout<<str;

}