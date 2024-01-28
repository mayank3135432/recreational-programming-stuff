/*11. Write a java program to illustrate the concept of Multiple inheritance?
 */
interface Amma1{
    public int add(int a,int b);
    public void show();
}
interface Amma2{
    public int add(int[] A);
    public void show();
}
class Baby implements Amma1,Amma2{
    public int add(int a,int b){
        return (a+b);
    }
    public int add(int[] A){
        int S=0;
        int i;
        for(i=0;i<A.length;i++){
            S=S+A[i];
        }
        return S;
    }
    public void show(){
        System.out.println("Dis a class");
    }
}
class q11{
    public static void main(String[] args){
        Amma1 obj1 = new Baby();
        Amma2 obj2 = new Baby();
        int[] A = {3,1,5,2};
        System.out.println(obj1.add(5,1));
        System.out.println(obj2.add(A));
        obj1.show();obj2.show();
        Baby obj3 = new Baby();
        System.out.println(obj3.add(5,3) + " " + obj3.add(A));
    }
}

/*Write a java program to illustrate the concept of Single level and multi-level
inheritance */