import java.util.Scanner;
class quad{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        double a,b,c;
        a=s.nextDouble();
        b=s.nextDouble();
        c=s.nextDouble();
        double D=b*b-(4*a*c);
        if(D<0) System.out.println("No real roots ");
        else if(D==0){
            System.out.println(-b/(2*a));
        }
        else{
            double rD=Math.sqrt(D);
            double r1,r2;
            r1=(-b+rD)/(2*a);
            r2=(-b-rD)/(2*a);
            System.out.println("("+r1+","+r2+")");
        }      
    }
}