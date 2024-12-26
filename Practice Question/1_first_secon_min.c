#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={24,24,24,24,0};
    int i,max=INT_MIN,second_max=INT_MIN;

    for(i=0;i<5;i++)
    {
        if(arr[i] > max)
        {
            second_max=max;
            max=arr[i];
        }
        else if(arr[i] > second_max && max!=arr[i])
        {
            second_max=arr[i];
        }
    }
    if(second_max == INT_MIN)
    {
        printf("There is no second maximum element. Max: %d\n", max);
    }
    else
    {
        printf("Second max: %d and Max: %d\n", second_max, max);
    }

    return 0;
}