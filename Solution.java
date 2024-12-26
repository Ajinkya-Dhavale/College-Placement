public class Solution {
    public int[] resultsArray(int[] nums, int k) {
        int n=nums.length,flag,max;
        int[] results=new int[n-k+1];
        for(int i=0;i<n-k+1;i++)
        {
            flag=0;
            max=nums[i];
            for(int j=i;j<k+i;j++)
            {
                if(nums[i] >= nums[j])
                {
                    flag=1;
                }
                if(nums[i]<nums[j])
                {
                    max=nums[j];
                }
            }
            if(flag==1)
            {
                results[i]=-1;
            }
            else{
                results[i]=max;
            }
        } 
        return results; 
    }
    public static void main(String[] args) {
        int[] a={1,2,3,4,3,2,5};
        System.out.println(new Solution().resultsArray(a, 3));
    }
}