// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

class Solution {
    public void rotate(int[][] matrix) {

         for(int i=0;i<matrix.length;i++)
        {
            for(int j=i+1;j<matrix[0].length;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        // for(int i=0;i<matrix.length;i++)
        // {
        //     for(int j=0;j<matrix[0].length;j++)
        //     {
        //         System.out.print(" "+matrix[i][j]);
        //     }
        //     System.out.println();
        // }
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix[0].length/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][matrix[0].length-j-1];
                matrix[i][matrix[0].length-j-1]=temp;
            }
        }
        // for(int i=0;i<matrix.length;i++)
        // {
        //     for(int j=0;j<matrix[0].length;j++)
        //     {
        //         System.out.print(" "+matrix[i][j]);
        //     }
        //     System.out.println();
        // }
    }
}
