/*1.Write a java program to find out factorial of a number?*/
import java.util.Scanner;
class q1{
    public static void main(String[] args){
        Scanner S = new Scanner(System.in);
        int i,fact=1,num;
        num=S.nextInt();
        for(i=1;i<=num;i++){
            fact=fact*i;
        }
        System.out.println(num + "! = " + fact);
    }
}