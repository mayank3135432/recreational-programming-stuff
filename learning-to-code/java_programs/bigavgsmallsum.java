import java.util.Scanner;
class bigavgsmallsum{
    static int max(int[] A){
        int i;;;
        int loc=0;
        for(i=1;i<A.length;i++){
            if(A[i]>A[loc]) loc=i;
        }
        return(A[loc]);
    }
    static int min(int[] A){
        int i;;;
        int loc=0;
        for(i=1;i<A.length;i++){
            if(A[i]<A[loc]) loc=i;
        }
        return(A[loc]);
    }
    static int sum(int[] A){
        int i;
        int s=0;
        for(i=0;i<A.length;i++){
            s=s+A[i];
        }
        return(s);
    }
    static float avg(int[] A){
        return(sum(A)/A.length);
    }
    public static void main(String[] args){
        Scanner reader=new Scanner(System.in);

        System.out.print("Enter size of Array ");
        int size=reader.nextInt();
        int i;
        int A[]=new int[size];
        for(i=0;i<size;i++){
            System.out.print("enter element at index "+ i +" ");
            A[i]=reader.nextInt();
        }
        System.out.println(max(A));
        System.out.println(min(A));
        System.out.println(sum(A));
        System.out.println(avg(A));


    }
}