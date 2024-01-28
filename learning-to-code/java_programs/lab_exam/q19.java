import java.util.Scanner;
class voters{
    public void checkage(int age){
        if(age<18){
            throw new ArithmeticException("Cannot vote");
        }
        else{
            System.out.println("Please Vote");
        }
    }
}
class q19{
    public static void main(String[] args){
        Scanner S = new Scanner(System.in);
        voters obj = new voters();
        int age=S.nextInt();
        try{
            obj.checkage(age);
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}