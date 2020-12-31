#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the size of row "<<endl;
    cin>>n;
    cout<<"Enter the size of column "<<endl;
    cin>>m;
    int arr[n][m];
    for(int i = 0; i<n;i++)
    {
        for(int j =0; j<m ;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is "<<endl;
    for(int i =0;i<n;i++)
    {
        for(int j =0; j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    //searching operation
    int x;
    cout<<"\nEnter the valid element to be searched "<<endl;
    cin>>x;
    bool flag =false;
    for(int i =0 ;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                flag = true;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    if(flag)
    {
        cout<<"Element found "<<endl;
    }
    else
    {
        cout<<"Element not found "<<endl;
    }

    //Deletion of the element
    int y;
    cout<<"Enter the valid element to be deleted "<<endl;
    cin>>y;
    bool check =false;
    for(int i =0;i<n;i++)
    {
        for(int  j =0;j<m;j++)
        {
            if(arr[i][j]==y)
            {
                check =true;
                arr[i][j]=0; 
            }
        }
    }
    if (check)
    {
        cout<<"Element deleted and 0 is written in place of that element"<<endl;
    }
    else
    {
        cout<<"Enter the valid element to be deleted "<<endl;
    }
    
    cout<<"After deletion "<<endl;
    for(int i =0;i<n;i++)
    {
        for(int j =0 ;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
