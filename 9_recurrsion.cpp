#include<iostream>
using namespace std;
int fact(int a){
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int x=fact(n);
    cout<<"factorial of number "<<x;
    
}