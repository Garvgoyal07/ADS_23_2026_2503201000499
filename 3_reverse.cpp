#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter any number" ;
    cin>>a;
    int c=0;
    while(a!=0)
    {
        int b=a%10;
        c=(c*10)+b;
        a=a/10;

    }
    cout<<c;

}
