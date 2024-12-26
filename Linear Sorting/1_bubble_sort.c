#include<stdio.h>
int main()
{
    int i,k,sum,maxSum=0,j,n=4,arr[5]={20,23,2,112};
    
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            if(sum>maxSum)
            {
                maxSum=sum;
            }
        }
    }

    printf("Display Array Element : ");
    for(i=0;i<n;i++)
    {
        printf(" %d\t",arr[i]);
    }
    return 0;
}