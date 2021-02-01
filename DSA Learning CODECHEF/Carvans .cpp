#include<stdio.h>
#include<stdint.h>

int main()
{
    int i,j;
    scanf("%d",&j);

    while(j--){
        long int n;
        scanf("%ld",&n);

        int32_t arr[n];
        int32_t temp;
        long int count=0;

        for(i=0;i<n;i++){
            scanf("%d",arr[i]);
        }
        temp = arr[0];

        for(i=0;i<n;i++){
            if(arr[i]<=temp){
                temp =arr[i];
                count++;
            }
        }
        printf("%d\n",&count);

    }
    return 0;
}