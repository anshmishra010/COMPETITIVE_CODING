#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int s , int e)
{
    if(s>=e){
        return;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    rev(arr,s+1,e-1);
}

void printrev(int arr[], int len){

    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    rev(arr,0,5);
    cout<<"Reverse array "<<endl;
    printrev(arr,6);
}