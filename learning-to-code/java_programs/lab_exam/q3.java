/*3.Write a java program that uses both recursive and non recursive functions to print
with value in the fibonacci sequence? */
/* class fibo{
    void fib(int n){
        if(n==0){
            System.out.println(n);
        }
        else if(n==1){
            System.out.println(n);
        }
        else if(n>1){

        }
    }
} */

import java.util.Scanner;

class q3{
    public static void main(String[] args){
        Scanner S = new Scanner(System.in);
        int num = S.nextInt();
        int[] A = new int[num+1];
        //A[0]=0;A[1]=1;
        int i;
        for(i=0;i<=num;i++){
            if(i==0 || i==1)
                A[i]=i;
            else
                A[i]=A[i-1]+A[i-2];
            System.out.print(A[i] + " ");
        }
    }
}