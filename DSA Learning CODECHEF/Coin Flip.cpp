#include<iostream>
using namespace std;

int main()
{
    int b;
    cin>>b;

    while (b--)
    {
        int a;
        cin>>a;

        while (a--)
        {
            int i,n,q;
            cin>>i>>n>>q;

            if(i==q) cout<<n/2<<"\n";
            else cout<<n-n/2<<"\n";
        }
        
    }
    
    return 0;
}