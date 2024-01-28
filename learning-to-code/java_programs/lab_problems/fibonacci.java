import java.util.Scanner;
class fibonacci{
    static int fibon(int a){
        if(a==0 || a==1) return 1;
        else if(a>1) return(fibon(a-1)+fibon(a-2));
        else return -1;
    }
    static void fiboprint(int a){
        int i;
        int x=0,y=1,f=0;
        for(i=0;i<a;i++){
            f=x+y;
            x=y;
            y=f;
            System.out.print(f + "\n");
        }

    }
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        System.out.println("enter a number ");
        int a=reader.nextInt();
        fiboprint(a);
    }
}