package pack;
public class Arr{
    public int sum(int[] A){
        int sum=0,i;
        for(i=0;i<A.length;i++){
            sum=sum+A[i];
        }
        return sum;
    }
}