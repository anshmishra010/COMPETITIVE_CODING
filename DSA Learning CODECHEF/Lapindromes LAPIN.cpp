#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int l[26] = {0};
		int r[26] = {0};
		int len = s.length();
		for(int j=0;j<len/2;j++)
		{
			int ind = s[j]-'a';
			l[ind]++;

		}
		for(int j=(len+1)/2;j<len;j++){
			int ind = s[j]-'a';
			r[ind]++;
		}
		int check =0;
		for(int j=0;j<26;j++){
			if(l[j]!=r[j]){
				check=1;
			}
		}
		if(check==0){
			cout<<"YES"<<endl;

		}

		else
		{
			cout<<"NO"<<endl;

		}
		
	}
}