abstract class Bank{
    abstract void name();
}
class SBI extends Bank{
    void name(){
        System.out.println("SBI");
    }
}
class HDFC extends Bank{
    void name(){
        System.out.println("HDFC");
    }
}
class Axis extends Bank{
    void name(){
        System.out.println("Axis");
    }
}
class ICICI extends Bank{
    void name(){
        System.out.println("ICICI");
    }
}
class q4_runtime_polymorphism{
    public static void main(String[] args){
        Bank B;
        B=new SBI();
        B.name();
        B=new HDFC();
        B.name();
        B=new Axis();
        B.name();
        B=new ICICI();
        B.name();
    }

}