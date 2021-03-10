    void swap(int *x , int *y)
    {
        int temp = *x;
        *x=*y;
        *y=temp;
    }
    void convertToWave(int arr[], int n){
        
        // Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-1;i+=2)
        {
            swap(&arr[i],&arr[i+1]);
        }
    }

    // we can do by this also
        void swap(int *x , int *y)
    {
        int temp = *x;
        *x=*y;
        *y=temp;
    }
    void convertToWave(int *arr, int n){
        
        // Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-1;i+=2)
        {
            swap(arr+i,arr+(i+1));
        }
    }