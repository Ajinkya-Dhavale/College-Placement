// 3.	Write a menu driven program to perform the following operations on a square matrix. Write separate functions for each option.
//         i.	Check if the matrix is symmetric.
//         ii.	Display the trace of the matrix (sum of diagonal elements).
//         iii.	Check if the matrix is an upper triangular matrix.
//         iv.	Check if the matrix is a lower triangular matrix
//         v.	Check if it is an identity matrix.


public class Main {
    public static void main(String[] args) {
      
      int m=3,n=3;
      int[][] arr={{1,2,3},{8,4,5},{0,0,7}};
      int flag=0;
      for(int i=1;i<arr.length-1;i++)
      {
        for(int j=0;j<i;j++)
        {
          if(j<i && arr[i][j]!=0)
          {
            System.out.println("Not Upper triangular");
            return;
          }
        }
      }
      
      System.out.println("Upper triangular");
      
  }
}