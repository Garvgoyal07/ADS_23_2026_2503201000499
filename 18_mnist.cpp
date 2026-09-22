#include<bits/stdc++.h>
using namespace std;
int mnist(int n,int arr[]){
    if(n==0)
    {
        return 0;
    }
    else
    {
    return arr[n-1]+mnist(n-1,arr);
    }
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<mnist(n,arr);
    
    return 0;
}