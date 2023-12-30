class array{
    public static void main(String args[]){
        int i,j,A[][];
        A=new int[2][2];
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                A[i][j]=i+j;
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                System.out.println(A[i][j] + " ");
            }
            System.out.println();

        }
        // A[0]=3;
        // A[1]=4;
        // A[2]=-2;
        // A[3]=0;
        // A[4]=1;
        // for(i=0;i<5;i++){
        //     System.out.println(A[i] );
        // }
    }
}