interface Animal{
    public void sound();
    public int legs();
}
class Dog implements Animal{
    public void sound(){
        System.out.println("BOW");
    }
    public int legs(){
        return(4);
    }
}
class Cat implements Animal{
    public void sound(){
        System.out.println("MEOW");
    }
    public int legs(){
        return(4);
    }
}
class Human implements Animal{
    public void sound(){
        System.out.println("AAAA");
    }
    public int legs(){
        return(2);
    }
}
class q16{
    public static void main(String[] args){
        Animal obj=new Dog();
        obj.sound();
    }
}