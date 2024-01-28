/*5.Write a java program that demonstrate two dimensional array?
 */

import java.util.Scanner;

class q5{
    public static void main(String[] args){
        Scanner S = new Scanner(System.in);
        int m = S.nextInt();
        int n = S.nextInt();
        int A[][] = new int[m][n];
        //make matrix A such that A[i][j] = i+j;
        int i,j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                A[i][j]=i+j;
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                System.out.printf("%d,",A[i][j]);
            }
            System.out.print("\n");
        }
    }
}