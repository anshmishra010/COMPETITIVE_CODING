#include<iostream>
#include<cmath>
using namespace std;

int fd(int **x, int n)
{
    int a = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                a=a+x[i][j];
            }
        }
    }
    return a;
}
int sd(int **x,int n)
{
    int b = 0, j = n-1;
    for(int i=0;i<n;i++)
    {
       
        
        b=b+x[i][j];
        j--;
    }
    return b;
}
int main()
{

    int n, sum1, sum2;
     cin>>n;
    int **x = new int*[n];
    for(int i=0; i<n ;i++){
        x[i] = new int[n];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
    sum1 = fd(x,n);
    sum2 = sd(x ,n);
  //  cout<<abs(sum1-sum2);
}