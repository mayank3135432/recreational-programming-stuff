interface Parent1{
    public int sum(int a,int b);
}
interface Parent2{
    public int sum(int[] arr);
}
public class q3_multiple implements Parent1 , Parent2{
    public int sum(int a,int b){return(a+b);}
    public int sum(int[] arr){
        int i,S=0;
        for(i=0;i<arr.length;i++){
            S=S+arr[i];
        }
        return(S);
    }

    public static void main(String[] args){
        int A[] = {3,1,2,-4,1};
        q3_multiple Obj = new q3_multiple();
        System.out.println(Obj.sum(3,1));
        System.out.println(Obj.sum(A));

    }
}