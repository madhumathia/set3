#include <iostream>
using namespace std;
int main()
{
    int n,i,j,a[6];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
       int med = n/2;//sizeof(a)/2;
        cout<<med<<"\n"<<a[med];
    return 0;
}


