/*2.Write a java program to check that whether given 
string is palindrome or not?*/
//import java.io.*;
import java.util.Scanner;
class q2{
    public static void main(String[] args){
        //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner S = new Scanner(System.in);

        String x=S.nextLine();
        //x = br.readLine();
        int n = x.length();
        int i,flag=1;
        n--;
        for(i=0;i<n/2;i++){
            if(x.charAt(i) != x.charAt(n-i)){
                flag=0;
                break;
            }
        }
        if(flag==0) System.out.println("Not Palindrome");
        else System.out.println("Is Palindrome");
    }
}