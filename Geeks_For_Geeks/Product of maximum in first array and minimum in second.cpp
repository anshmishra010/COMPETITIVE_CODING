long long find_multiplication(int a[], int b[], int n, int m)
{
    // Complete the function
    sort(a,a+n);
    sort(b,b+m);
    return a[n-1]*b[0];
}