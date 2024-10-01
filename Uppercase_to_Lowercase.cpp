//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
   
    
    string modify (string s)
    {
        int n = s.size();
    
        for( int i=0 ; i< n ;i++)
        {
            char ch = s[i];
            if(ch>= 'A' && ch <= 'Z') 
            {
               s[i] = ch - 'A' + 'a';
            }
        }
        return s;
        
    }
};
