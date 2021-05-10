int chocolates(int arr[], int n)
{
    // Complete the function
    int start =0;
    int end = n-1;
    while(start != end)
    {
        if(arr[start]>=arr[end] && start<end){
            start++;
        }
        else if(arr[end] >= arr[start] &&  start<end){
            end--;
        }
    }
    return arr[start];
}