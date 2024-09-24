#include<iostream>
using namespace std;

int getlength( char name[] )
{
    int count =0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}


void reverstring(char name[], int n )
{
    int i= 0;
    int j = n-1;

    while(i<j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<"Reversed Array is :"<<name;
}
int main()
{
    char name[20];
    cout<<"Enter you name without space :"<<endl;   
    cin>>name;

    cout<<"Your name is : "<<name<<endl;
    cout<<"Length of String is :"<<getlength(name)<<endl;
     int size = getlength(name);
    reverstring(name,size);
    return 0;



    

}