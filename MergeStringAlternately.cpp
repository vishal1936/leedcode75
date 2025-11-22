# include<iostream>
using namespace std;
 string mergeAlternately(string word1, string word2)
 {
    string word3="";
    int j=0; 
      int k=0;

       while(j<word1.size() && k<word2.size())
       {
            word3.push_back(word1[j++]);
            word3.push_back(word2[k++]);
        }
       while(j<word1.size())
       {
       word3.push_back(word1[j++]);
       }
          while(k<word2.size())
       {
       word3.push_back(word2[k++]);
       }
       return word3;
 }
int main()
{
   string word1= "abc";
string word2 ="pqr";
string word =mergeAlternately(word1,word2);
cout<<word;
}
