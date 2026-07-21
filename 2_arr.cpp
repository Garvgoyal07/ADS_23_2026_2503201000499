#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the address of each element of an array  is : "<<endl;
    for( int j=0;j<n;j++)
    {

        cout<<arr[j]<<" "<<&arr[j]<<endl;
        

    }
}