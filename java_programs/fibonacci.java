/*1,1,2,3,5,8,13*/
import java.util.Scanner;
class fibonacci{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        fiboni f1=new fiboni();
        int x=f1.fibo(a);
        System.out.println(x);
        //input.close();
    }
}
class fiboni{
    public int fibo(int a){
        if(a==0 || a==1){
            return(1);
        }
        else{
            return(fibo(a-1)+fibo(a-2));
        }
    }
}