import java.util.Scanner;
public class matrix_multi{
    //private double[][] arr;
    public static double[][] ERROR(){
        System.out.print("Given matrices cannot be operated\n\n");
        double[][] ERR={{0}};
        return(ERR);
    }
    public static double[][] add(double[][] A,double[][] B){
        if(!(A.length==B.length && A[0].length==B[0].length)) return(ERROR());
        int m=A.length,n=A[0].length;
        int i,j;
        double[][] C=new double[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        return(C);
    }
    public static void printm(double[][] M){
        int i,j;
        for(i=0;i<M.length;i++){
            System.out.print("[");
            for(j=0;j<M[0].length;j++){
                System.out.print(M[i][j] + ",");
            }
            System.out.print("\b]\n");
        }
        System.out.print("\n\n");
    }
    public static double[][] dot(double[][] A,double[][] B){//returns AB
        if(A[0].length != B.length ){
            return(ERROR());//ERROR
        }
        int row=A.length,col=B[0].length;
        double[][] C=new double[row][col];//create new matrix C which will be A+B
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                C[i][j]=0;
                for(int k=0;k<A[0].length;k++)//0<=k<colsize(A)
                    C[i][j]+=A[i][k]*B[k][j];//C(i,j)=Σ[A(i,k)*B(k,j)]
            }
        }
        return(C);
    }

    public static void main(String[] args){
        Scanner reader=new Scanner(System.in);
        int m=reader.nextInt(),n=reader.nextInt(),p=reader.nextInt();
        double[][] A=new double[m][n];
        double[][] B=new double[n][p];
        int i,j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                System.out.print("enter ("+i+","+j+") element ");
                A[i][j]=reader.nextDouble();
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<p;j++){
                System.out.print("enter ("+i+","+j+") element ");
                B[i][j]=reader.nextDouble();
            }
        }
        printm(A);printm(B);printm(dot(A,B));
        //m=reader.nextInt();
        // double[][] A={{1,2},{2,5}},B={{3},{-2}};
        // printm(dot(A,B));
        //matrix_multi obj=new matrix_multi();
    }
}