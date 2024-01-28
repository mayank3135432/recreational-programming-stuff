/*program to print first n numbers and whether they are prime of not
 * 0:not prime
 * 1:prime
*/
import java.util.Scanner;
class checkprime{
    static int checkifprime(int num){
        int i;
        for(i=2;i<num/2;i++){
            if(num%i==0){
                return 0;
            }
        }
        return 1;
    }
    public static void main(String[] args){
        Scanner reader=new Scanner(System.in);
        int num;
        int number=reader.nextInt();
        //System.out.println(checkprime(num));
        for(num=2;num<=number;num++){
            System.out.print(num + " " + checkifprime(num) + "\n");;
        }
    }
}