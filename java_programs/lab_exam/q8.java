/*8. Write a java program that illustrates the concept of method 
overloading and constructor overloading?
 */
class Student{
    String name;
    String id;
    int age;
    Student(){
        this.name="ABC";
        this.id="00ABCCHH000000";
        this.age=0;
    }
    Student(String name,String id,int age){
        this.name=name;
        this.id=id;
        this.age=age;
    }
    void show(){
        System.out.printf("%s\n%s\n%d\n\n",name,id,age);
    }
    void show(int age){
        System.out.printf("%s\n%s\n%d\n\n",name,id,age);
    }
}
class q8{
    public static void main(String[] args){
        Student obj1 = new Student();
        Student obj2 = new Student("mjkgdvd","22STUCHH010216",19);
        obj1.show(23);
        obj2.show();
    }
}