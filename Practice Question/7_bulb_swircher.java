class Solution {
    public int bulbSwitch(int n) {
        // boolean[] arr=new boolean[n];
        // int count=0;
        
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=i-1;j<n;j=j+i)
        //     {
        //         arr[j]=!arr[j];
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i])
        //     {
        //         count++;
        //     }
        // }
        // return count;

        // int count=0,i=1;
        // while(i*i <= n )
        // {
        //     count++;
        //     i++;
        // }
        // return count;

        return (int)Math.sqrt(n);
    }
}