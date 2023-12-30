package packages_q20;
public class Arr{
    public int sum(int[] arr){
        int i,sum=0;
        for(i=0;i<arr.length;i++){
            sum = sum+arr[i];
        }
        return(sum);
    }
    public int min(int[] arr){
        int i,ind=0;
        for(i=1;i<arr.length;i++){
            if(arr[i]<arr[ind]) ind=i;
        }
        return(arr[ind]);
    }
    public int max(int[] arr){
        int i,ind=0;
        for(i=1;i<arr.length;i++){
            if(arr[i]>arr[ind]) ind=i;
        }
        return(arr[ind]);
    }
    public int range(int[] arr){
        return(max(arr)-min(arr));
    }
    public double mean(int[] arr){
        return((double)sum(arr)/arr.length);
    }
}