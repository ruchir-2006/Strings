#include<iostream>
using namespace std;

int acii_value (char ch)
{
    return int(ch);
}

int main()
{
    char name;   
    cout<<"Enter the alphabet "<<" ";
    cin>>name;
   
    acii_value(name);
    int n = acii_value(name);
    cout<<n;
}