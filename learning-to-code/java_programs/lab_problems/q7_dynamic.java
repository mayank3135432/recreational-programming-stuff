class Animal{
    void sound(){
        System.out.println("SOUND OF AN ANIMAL");
    }
}
class Dog extends Animal{
    void sound(){
        System.out.println("BOW WOOF BOW");
    }
}
class Cat extends Animal{
    void sound(){
        System.out.println("MEOW MEAOW MWAW");
    }
}
class Human extends Animal{
    void sound(){
        System.out.println("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    }
    int add(int a,int b){
        return(a+b);
    }
}
/* class Programmer extends Human{
    void sound(){
        System.out.println("SEGMENTATION FAULT ):");
    }
    int add(int[] A){
        int i,S=0;
        for(i=0;i<A.length;i++){
            S=S+A[i];
        }
        return S;
    }
} */
class q7_dynamic{
    public static void main(String[] args){
        Animal A = new Animal();
        Dog D = new Dog();
        Cat C = new Cat();
        Human H = new Human();
        //Programmer P = new Programmer();
        Animal var;
        var = A;//showcase method overriding
        var.sound();
        var = D;
        var.sound();
        var = C;
        var.sound();
        var = H;
        var.sound();
        //showcase method overloading
        /* Human varh = new Human();
        varh = H;
        System.out.println(varh.add(3,-1));
        varh = H;
        int[] arr={2,1,3,2,-5}
        System.out.println(varh.add(arr)); */

    }
}