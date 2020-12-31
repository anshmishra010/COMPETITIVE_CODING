#include<iostream>
using namespace std;
int main()
{
    long n;
    long sum=0;
    cin>>n;
    long arr[n];
   // cin>>n;
    for(long i=0;i<n;i++)
    {
        cin>>arr[i];
        //sum=arr[i]+sum;
    }
    for(long i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    
}