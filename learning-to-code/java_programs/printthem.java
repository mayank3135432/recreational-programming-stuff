class printthem{
    static void print(int x){
        System.out.println(x);
    }
    static void print(double x){
        System.out.println(x);
    }
    static void print(int[] A){
        int i;
        System.out.print("[");
        for(i=0;i<A.length;i++)
        System.out.print(A[i]+",");
        System.out.print("\b]\n");
    }
    static void print(double[] A){
        int i;
        System.out.print("[");
        for(i=0;i<A.length;i++)
        System.out.print(A[i]+",");
        System.out.print("\b]\n");
    }
    public static void main(String[] args){
        int[] A={3,1,5,3,8,-2};
        double[] X={-5.42,4,1,-1.4,0.01,10.32};
        print(-5);
        print(3.21);
        print(A);
        print(X);

    }
}