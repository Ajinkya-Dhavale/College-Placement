class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] arr=new int[nums.length];
        int[] right=new int[nums.length];
        int left=1,prod=1,i;
        for(i=nums.length-1;i>=0;i--)
        {
           prod=prod*nums[i];
           right[i]=prod;
        }
        for(i=0;i<nums.length-1;i++)
        {
            arr[i]=right[i+1]*left;
            left=left*nums[i];
        }
        arr[i]=left;
        return arr;
    }
}