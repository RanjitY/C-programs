#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< "Enter your age:";
    cin>>age;
    
    if(age>18)
    {
        cout<<"You are eligible for marriage.";
    }
    else
    {
        cout<<"You are not eligible for marriage.";      
    }
    return 0;
}
