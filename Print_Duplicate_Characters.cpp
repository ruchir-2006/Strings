#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print_duplicates(string s)
{
    int n = s.size();
    sort(s.begin(), s.end());
    
    for(int i=0; i < n ; i++)
    {
        int count =1;
        while(i<n && s[i] == s[i+1])
        {
            count++;
            i++;
        }
        if(count>1)
        {
        cout<< s[i] << " ,Count="<<count<<endl;
        }
        
    }

}

int main()
{
    string str ="ruchhiir";
    print_duplicates(str);
    return 0;

}




