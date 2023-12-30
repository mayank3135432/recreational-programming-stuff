import pack.*;
class arrpack{
    public static void main(String[] args) {
        Arr arr = new Arr();
        int[] A = {1,2,3,4,-5};
        int s = arr.sum(A);
        System.out.println(s);
    }
}