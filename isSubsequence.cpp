#include<iostream>
#include<string>
using namespace std;
 bool isSubsequence(string s, string t)
{

int k=t.size();
string str1="";
  int j=0;
for(int i=0; i<k;i++)
{
  
   if(s[j]==t[i])
        {
            str1.push_back(s[j]);
        j++;
        }
    

}
if(str1==s)
{
    return true;
}
else{
    return false;
}
 }
int main()
{
   string s = "abc", t = "ahbgdc";
  bool str = isSubsequence(s,t);
   cout<<str;

}