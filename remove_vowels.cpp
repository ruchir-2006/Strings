#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string remove_vowel(string s)
{
    string news ="";
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        
        if((ch>= 'a' && ch<='z') ||(ch>= 'A' && ch<='Z' ))
        {
            if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') )
            {

            }
            else
            news= news+s[i];

        }

    }
    return news;

}


int main()
{
    string name = "Ruchir Dakhale";
    string final = remove_vowel(name);
    cout<<final;
    return 0;


    
}