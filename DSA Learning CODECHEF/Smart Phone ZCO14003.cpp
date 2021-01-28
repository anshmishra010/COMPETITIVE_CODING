#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
	int t;
	cin>>t;
	ll arr[t];
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+t);
	ll maxi=0;
	for(int i=0;i<t;i++)
	{
		maxi = max(maxi,arr[i]*(t-i) );
	}
	cout<<maxi<<endl;
	return 0;
}