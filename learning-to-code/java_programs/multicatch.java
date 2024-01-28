/*
18. Write a java program to implement multi-catch statements?
 */
class multicatch{
    public static void main(String[] args) {
        int A[] = {2,1,4,3,6};
        try{
            A[5]=21/0;
        }catch(ArithmeticException e){
            System.out.println(e);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e);
        }
    }
}