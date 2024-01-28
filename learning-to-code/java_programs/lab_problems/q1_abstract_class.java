import java.util.*;
abstract class Shape{
    double lenght;
    double breadth;
    double radius;
    Scanner S= new Scanner(System.in);
    abstract void input();
    abstract void printarea();
}
class Rectangle extends Shape{
    void input(){
        lenght=S.nextDouble();
        breadth=S.nextDouble();
    }
    void printarea(){
        System.out.println(lenght*breadth);
    }
}
class Circle extends Shape{
    void input(){
        radius=S.nextDouble();
    }
    void printarea(){
        System.out.println(3.14159*radius*radius);
    }
}
class Triangle extends Shape{
    void input(){
        lenght=S.nextDouble();//Base
        breadth=S.nextDouble();//Height
    }
    void printarea(){
        System.out.println(lenght*breadth/2);
    }
}


class q1_abstract_class{
    public static void main(String[] args){

        System.out.println("Rectangle");
        Rectangle R = new Rectangle();
        R.input();
        R.printarea();

        System.out.println("Triangle");
        Triangle T = new Triangle();
        T.input();
        T.printarea();

        System.out.println("Circle");
        Circle C = new Circle();
        C.input();
        C.printarea();
    }
}