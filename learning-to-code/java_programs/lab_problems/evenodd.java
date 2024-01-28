import java.util.Scanner;
public class evenodd{
    public static void main(String[] args){
        Scanner reader=new Scanner(System.in);
        System.out.print("enter a number: ");
        int num=reader.nextInt();
        if(num%2==0){
            System.out.print("is even");
        }
        else{
            System.out.print("is odd");
        }
    }
}