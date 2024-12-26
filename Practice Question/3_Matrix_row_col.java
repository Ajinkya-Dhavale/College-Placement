import java.util.Arrays;

public class Matrix {
    public static void main(String[] args) {
        int[][] arr = { { 0, 5, 9 }, { 4, 3, 8 }, { 3, 4, 2 } };
        
        System.out.println("\nOriginal Matrix:");
        for (int[] row : arr) {
            for (int elem : row) {
                System.out.print(elem + " ");
            }
            System.out.println();
        }
        
		for(int i=0;i<arr.length;i++)
		{
			Arrays.sort(arr[i]);
		}
		
		 System.out.println("\nSorted Matrix row :");
	        for (int[] row : arr) {
	            for (int elem : row) {
	                System.out.print(elem + " ");
	            }
	            System.out.println();
	        }

//	       System.out.println();
//        // Transpose in-place for square matrix
//        for (int i = 0; i < arr.length; i++) {
//            for (int j = i + 1; j < arr[i].length; j++) {
//                int temp = arr[i][j];
//                arr[i][j] = arr[j][i];
//                arr[j][i] = temp;
//            }
//        }
//
//        for(int i=0;i<arr.length;i++)
//		{
//			Arrays.sort(arr[i]);
//		}
//        
//     // Transpose in-place for square matrix
//        for (int i = 0; i < arr.length; i++) {
//            for (int j = i + 1; j < arr[i].length; j++) {
//                int temp = arr[i][j];
//                arr[i][j] = arr[j][i];
//                arr[j][i] = temp;
//            }
//        }        
	        
	        
	        
	        
//	        sort array colomn wise
//	     int row_length=arr.length;
//	     int col_length=arr[0].length; 
//	     for(int i=0;i<col_length;i++)
//	     {
//	    	 int[] column_arr=new int[row_length];
//	    	 
//	    	 for (int row = 0; row < row_length; row++) {
//	    		 column_arr[row] = arr[row][i];
//	         }
//	    	 Arrays.sort(column_arr);
//	    	 for (int row = 0; row < row_length; row++) {
//	    		 arr[row][i]=column_arr[row];
//	         }
//	     } 
//	      
        System.out.println("\nSorted Matrix:");
        for (int[] row : arr) {
            for (int elem : row) {
                System.out.print(elem + " ");
            }
            System.out.println();
        }
    }
}
