//18. Write a java program to implement multi-catch statements?
//import java.io.FileInputStream;

class q18{
    public static void main(String[] args){
        int[] A={3,1,6,2,9};
        String s="32.2";
        try{
            //A[6]=(1/0+Integer.parseInt(s));// gives Arthimetic Error Happened
            A[6]=(Integer.parseInt(s)/0);//gives NumberFormatException
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array Index Error");
        }
        catch(ArithmeticException e){
            System.out.println("Arthimetic Error Happened");
        }
        catch(NumberFormatException e){
            System.out.println("Number Format Exception");
        }
        catch(Exception e){
            System.out.println("Parent class Error");
            System.out.println(e);
        }
        finally{
            System.out.println("In Finally block");
            int i;
            System.out.print("\n\n");
            for(i=0;i<A.length;i++){
                System.out.print(A[i] + ",");
            }
        }

    }
}