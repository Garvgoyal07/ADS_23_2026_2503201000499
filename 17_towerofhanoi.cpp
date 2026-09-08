#include<bits/stdc++.h>
using namespace std;
void toh(int n,char source,char destination,char mediator){
    if(n==1){
        cout<<"move disk 1 from rod"<<"to rod"<<destination<<endl;
        return;
    }
    toh(n-1,source,mediator,destination);
    cout<<"move disk"<<n<<"from rod"<<source<<"to rod"<<destination<<endl;
    toh(n-1,mediator,destination,source);
}
int main(){
    int n;
    cout<<"enter no  of disk"<<"\t";
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}