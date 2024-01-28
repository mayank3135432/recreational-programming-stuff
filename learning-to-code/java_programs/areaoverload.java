import java.util.Scanner;
class areaoverload{
    static double area(double a){
        return(a*a);
    }
    static double area(double a,double b){
        return(a*b);
    }
    public static void main (String[] args){
        double a=20,b=40;
        System.out.println(area(a));
        System.out.println(area(a,b));

    }
}