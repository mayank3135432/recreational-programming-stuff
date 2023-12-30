class Parent{
    void show(){
        System.out.println("Hello Hi am Parent");
    }
}
final class Child extends Parent{
    void show(){
        System.out.println("I won't have any child classes");
    }
}
class Baby extends Child{
    void show(){
        System.out.println("Override parent method");
    }
}
class q6_final{
    public static void main(String args[]){
        Parent X = new Child();
        X.show();
        Child B = new Baby();
        B.show();

    }
}

/*
We get compile time error
q6_final.java:11: error: cannot inherit from final Child
class Baby extends Child{
                   ^
1 error

 */