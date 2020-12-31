#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos,neg,zero;
    float a=0;
    float b=0;
    float c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
        if(arr[i]>0)
        {
            a++;
        }
        else if(arr[i]<0)
        {
            b++;
        }
        else
        {
            c++;
        }
        
    }
    //printf("%.6f%.6f%.6f",a/n,b/n,c/n);
    cout<<setprecision(6)<<(float)a/n<<endl;
    cout<<setprecision(6)<<(float)b/n<<endl;
    cout<<setprecision(6)<<(float)c/n<<endl;

}