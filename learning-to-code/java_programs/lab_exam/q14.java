/*14. Write a java program to implement super keyword and its sub concepts(uses)?
 */
class Parent{
    int num=12;
    public void show(){
        System.out.println(num);
    }
}
class Child extends Parent{
    int num=21;
    public void show(){
        super.show();
        System.out.printf("%d+%d=%d\n",num,super.num,num+super.num);
    }
}
class q14{
    public static void main(String[] args){
        Parent pbj = new Parent();//pbj.num=21;
        Child cbj = new Child();//cbj.num=12;
        pbj.show();
        System.out.println("_______________");
        cbj.show();
    }
}