/*15. Write a java program to implement final keywords and its sub concepts(preventions)?
 */
class Amma{
    final void show(){
        System.out.println("Parent CLASS");
    }
}
final class Child extends Amma{
    //UNCOMMENT BELOW LINE
    //void show(){System.out.println("OVERRIDING FINAL METHOD");}//gives compile time error
    void print(){
        System.out.println("FINAL CLASS");
    }
}
//UNCOMMENT BELOW LINE
//class Baby extends Child{void showme(){System.out.println("ILLEGAL CLASS");}}//Gives compile time error

class q15{
    public static void main(String[] args){
        final int a=12;
        //UNCOMMENT BELOW LINE
        //a=a+1;//gives compile time error
    }
}

/*
q15.java:14: error: cannot inherit from final Child
class Baby extends Child{void showme(){System.out.println("ILLEGAL CLASS");}}
                   ^
q15.java:9: error: show() in Child cannot override show() in Amma
    void show(){System.out.println("OVERRIDING FINAL METHOD");}//gives compile time error
         ^
  overridden method is final
q15.java:19: error: cannot assign a value to final variable a
        a=a+1;//gives compile time error
        ^
3 errors

 */