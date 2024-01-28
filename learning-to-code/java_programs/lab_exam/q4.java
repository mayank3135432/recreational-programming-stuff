/*4.Write a java program to display the employee details using Scanner class? */

import java.util.Scanner;

class q4{
    public static void main(String[] args){
        System.out.println("Enter name,age,salary,id");
        Scanner S = new Scanner(System.in);
        String name = S.next();
        int age = S.nextInt();
        int salary = S.nextInt();
        String id = S.next();
        System.out.println("name is "+name+" age is "+age+" Salary is "+salary+" id is "+id);   
    }
}