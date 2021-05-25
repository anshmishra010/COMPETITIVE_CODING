void sort012(int a[], int n)
    {
        // coode here 
        //using dutch national flag algo
        int low = 0;
        int mid = 0;
        int high = n-1;
        
        while(mid<=high){
            if(a[mid] == 0){
                swap(a[mid],a[low]);
                mid++;
                low++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
    }

    // one liner  code : sort(a,a+n);