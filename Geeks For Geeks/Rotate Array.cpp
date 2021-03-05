#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test; 

	while(test--)
	{
	   	int n,d;
        cin>>n>>d;
        int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[(i+d)%n]<<" ";
	    }
	    cout<<"\n";
	}
	
	return 0;
}