import java.util.Scanner;
public class factorial{
    static int fact(int a){
        if(a==0 || a==1){
            return 1;
        }
        else if(a>1){
            return(a*fact(a-1));
        }
        else{
            return -1;//error
        }
    }
    public static void main(String[] args){
        System.out.println("enter a number ");
        Scanner reader=new Scanner(System.in);
        int num=reader.nextInt();
        int y=fact(num);
        System.out.print(num + "! = " + y +"\n");
    }
}