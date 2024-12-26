// 5.	You are given numBottles full water bottles. You can exchange numExchange empty water bottles from the market for one full water bottle. The operation of drinking a full water bottle turns it into an empty bottle.
// Write a Java program to determine the maximum number of water bottles you can drink given the initial number of full bottles and the exchange rate.
// Input:
// numBottles: The initial number of full water bottles.
// numExchange: The number of empty water bottles required to exchange for one full water bottle.
// Output:
// The maximum number of water bottles you can drink.
// 		Examples:
// 1.	Input: numBottles = 9, numExchange = 3
// Output: 13
// Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
// Number of water bottles you can drink: 9 + 3 + 1 = 13.

// 2.	Input: numBottles = 15, numExchange = 4
// Output: 19
// Explanation: You can exchange 4 empty bottles to get 1 full water bottle.
// Number of water bottles you can drink: 15 + 3 + 1 = 19. (15/4 = 3 plus 3 = 6 / 4 = 1 + 2 = 3  = 15+3+1= 19)

#include<stdio.h>
int main()
{
    int n=15,g=4;
    int max=n,d=0,r=0,n1=0;
    // if(n < g)
    // {
    //     printf("%d",n);
    //     return 0;
    // }
    // max=n;
    // d=n/g;
    // r=n%g;

    // max+=d;
    // n1=d+r;

    // while(1)
    // { 
    //     if(n1 >= g)
    //     {
    //         d=n1/g;
    //         r=d%g;

    //         max+=d;
    //         n1=d+r;//1+2=3
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // printf("%d",max);
    // return 0;



    // ganesh chya 4 lines
    n=15,max=15,g=4;

    while(n >= g) // 6 >=4      3>=4
    {
        d = n/g;//3,    6/4=1
        max= max+d; //15+3=18   18+1=19
        r=n%g; //15%4=3     6%4=2
        n=d+r; //3 + 3 =6   1+2=3
    }
    printf("%d",max);
    return 0;
}