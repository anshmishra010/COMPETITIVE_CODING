#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll getzero(ll n)
{
    ll count = 0;
    for(ll i=5;(n/i)>0;i=i*5){
        count+=(n/i);

    }
    return count;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll num;
        cin>>num;
        cout<<getzero(num)<<endl;
    }
    return 0;
}