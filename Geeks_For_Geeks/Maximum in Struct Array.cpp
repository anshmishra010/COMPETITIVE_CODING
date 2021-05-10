int findMax(Height arr[], int n)
{
    // Code here
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        int temp = 12*(arr[i].feet)+arr[i].inches;
        maxi = max(maxi,temp);
    }
    return maxi;
}