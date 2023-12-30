/*write programs to display employee details using scanner class*/
//name id age salary;;;;
import java.util.Scanner;
class employee{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int num,i;
        int age,id;String name;
        float salary;
        System.out.println("Enter number of employees ");
        num =s.nextInt();
        for(i=0;i<num;i++){
            System.out.println("Enter name, age, id, Salary respectivly of employee " + i);
            name=s.next();
            age=s.nextInt();
            id=s.nextInt();
            salary=s.nextFloat();
            System.out.print("\nname is " +name+"\nage is "+age+"\nid is "+id+"\nsalary is "+salary+"\n\n");
        }
    }
}


























/* class employee{
    int agedata=100;
    String namedata="default_name";
    int iddata=0;
    int salarydata=0;
    public int age(){
        return agedata;
    }
    public int id(){
        return iddata;
    }
    public int salary(){
        return salarydata;
    }
    public String name(){
        return namedata;
    }
    


    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int num;
        System.out.print("enter number of employees ");
        num=s.nextInt();
        employee[] E1=new employee[num];
        //E1[0].agedata=25;
        System.out.println(E1[0].age());
    }
}




class Employee{
    int agedata;
    String namedata;
    int iddata;
    int salarydata;
    public int age(){
        return agedata;
    }
    public int id(){
        return iddata;
    }
    public int salary(){
        return salarydata;
    }
    public String name(){
        return namedata;
    }

}

 */