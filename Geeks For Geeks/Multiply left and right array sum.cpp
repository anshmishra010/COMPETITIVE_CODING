int multiply(int arr[], int n)
{
    // Complete the function
    int s1=0;
    int s2=0;
    int m;
    int l = n/2;
    for(int i=0;i<l;i++){
        s1+=arr[i];
    }
    for(int j=l;j<n;j++){
        s2 +=arr[j];
    }
    m = s1*s2;
    return m;
}