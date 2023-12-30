/*23. Write a java program to implement Thread synchronization?
 */
class Table{
    synchronized void print(int num){//keep synchronized 
        for(int i=1;i<=5;i++){
            System.out.println(num*i);
        }
    }
}
class Th1 extends Thread{
    Table t;
    Th1(Table t){
        this.t=t;
    }
    public void run(){
        t.print(5);
        try {
            sleep(1000);
        } catch (InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
class Th2 extends Thread{
    Table t;
    Th2(Table t){
        this.t=t;
    }
    public void run(){
        t.print(20);
        try {
            sleep(1000);
        } catch (InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
class q23{
    public static void main(String[] args) {
        Table obj = new Table();
        Th1 thread1 = new Th1(obj);
        Th2 thread2 = new Th2(obj);
        thread1.start();
        thread2.start();
    }
}



/*
 * O/P: 
 * 
20
40
60
80
100
5
10
15
20
25

OR

5
10
15
20
25
20
40
60
80
100

OR
this next one induces onamanapeia
5
10
15
20
40
60
80
100
20
25

 */