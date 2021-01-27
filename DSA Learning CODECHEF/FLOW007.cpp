#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int quant;
	cin>>quant;
	while(quant--){
	    int num , r=0;
	    cin>>num;
	    while(num>0){
	        r = r*10 + num%10;
	        num/=10;
	    }
	    cout<<r<<endl;
	}
	return 0;
}