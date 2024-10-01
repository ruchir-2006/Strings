#include<iostream>
using namespace std;

int  numberofwords(string s)
{
    int n = s.size();
    int counte = 0;
    for( int i=0; i<n ; i++)
    {
        if(s[i]!= ' ')
        {
        }
        else
        counte++;

    }
    return counte + 1;
}  

int main()
{
    string su = "I will do it";
    int wordse = numberofwords(su);
    cout<<wordse<<endl;
    return 0;
}