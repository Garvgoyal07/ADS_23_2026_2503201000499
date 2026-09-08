#include<iostream>
using namespace std;
# define MAX 5
int pq[MAX];
int n=0;
void insert (int x)
{
    if(n==MAX)
    {
        cout<<"queue overflow\n";
        return;
    }
    int i=n-1;
    while(i>=0&&pq[i]>x){   
        pq[i+1]=pq[i];
        i--;
    }
    pq[i+1]=x;
    n++;
}
void deleteElement()
{
    if(n==0)
    {
        cout<<"queue underflow\n";
        return ;
    }
    cout<<"deleted : "<<pq[0]<<endl;
    for(int i=0;i<n-1;i++)
    {
        pq[i]=pq[i+1];
        n--;
    }
}
void display()
{
    for(int i=0;i<n;i++)
        cout<<pq[i]<<" ";
    
    cout<<endl;
}
int main()
{
    insert(30);
    insert(10);
    insert(20);
    display();
    deleteElement();
    display();
    
    return 0;
}