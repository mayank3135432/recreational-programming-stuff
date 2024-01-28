/*9. Write a java program that illustrates static variable and static methods?
 */
class foobani{
    static int a = 0;
    void foo(){
        int b = 0;
        while(a<10){
            System.out.printf("%d,%d\n",a,b);
            b++;
            a++;
            foo();
        }
    }
    public static void show(){
        System.out.println("IN STATIC METHOD");
    }
}
class fiboni{
    static int[] A = new int[9];//why cannot static be within a function ?
    
}
class q9{
    public static void main(String[] args){
        foobani obj = new foobani();
        obj.foo();
        foobani.show();
    }
}