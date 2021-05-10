    int minValueToBalance(int a[], int n)
    {
       //code here.
       int half = n/2;
       int fs = 0;
       int ss=0;
       int res=0;
       for(int i=0;i<half;i++)
       {
           fs+=a[i];
       }
       for(int i=half;i<n;i++)
       {
           ss+=a[i];
       }
       if(fs>ss)
       {
           res=fs-ss;
       }
       else
       {
           res = ss-fs;
       }
       return res;
       
    }