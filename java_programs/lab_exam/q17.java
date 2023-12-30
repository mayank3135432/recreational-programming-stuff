/*
17. Write a java program to implement abstract classes and abstract methods?
*/
abstract class Animal{
    void sound(){
        System.out.println("I am Animal");
    }
    abstract void legs();
}
class Dog extends Animal{
    void sound(){
        System.out.println("BOW WOOF BOW");
    }
    void legs(){
        System.out.println("4 legs");
    }
}
class Fox extends Animal{
    void sound(){
        System.out.println("AWOOOOOOO");
    }
    void legs(){
        System.out.println("4 legs");
    }
}
class Human extends Animal{
    void legs(){
        System.out.println("2 legs");
    }
}

class q17{
    public static void main(String[] args){
        Animal diogee = new Dog();
        Animal efoeks = new Fox();
        Animal hechyuemen = new Human();
        diogee.sound();
        diogee.legs();
        System.out.println("_________");
        efoeks.sound();
        efoeks.legs();
        System.out.println("_________");
        hechyuemen.sound();
        hechyuemen.legs();
        //Animal obj = new Animal;//compile time error
    }
}