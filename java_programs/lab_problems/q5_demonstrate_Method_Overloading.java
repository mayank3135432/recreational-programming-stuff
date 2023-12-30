class Sum{
    int sum(int a,int b){return(a+b);}
    int sum(int a,int b,int c){return(a+b+c);}
    double sum(double[] A){
        int i;
        double S=0;
        for(i=0;i<A.length;i++){
            S=S+A[i];
        }
        return(S);
    }
    int sum(int[] A){
        int i;
        int S=0;
        for(i=0;i<A.length;i++){
            S=S+A[i];
        }
        return(S);
    }
}
class q5_demonstrate_Method_Overloading{
    public static void main(String[] args){
        Sum S = new Sum();
        System.out.println(S.sum(3,2,4));
        int[] A={3,1,5,2};
        System.out.println(S.sum(A));
        double[] Q={4.2,-5,1.4,-3,-1.2};
        System.out.println(S.sum(Q));

    }
}