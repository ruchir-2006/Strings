#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void vowels_consonants(string s)
{
    int n=s.size();
    int vowels= 0;
    int consonants=0;
    int numbers = 0;

    for(int i=0; i<n ; i++)
    {
        char ch = s[i];
        if(ch>= 'a' && ch<='z')
        {
            if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
            else
            consonants++;
        }
        
        else
        numbers++;
        
       
    }
    cout<<"Number of Vowels : "<<" "<<vowels<<endl;
    cout<<"Number of Numbers : "<<" "<<numbers<<endl;
    cout<<"Number of consonants : "<<" "<<consonants<<endl;

}

int main()
{
    string name = "aeiou667";
    vowels_consonants(name);
    return 0;
    
}