/*
21. Write a java program to create a thread using Thread class?
 */
class Multi22 extends Thread{
    private int number;
    Multi22(int num){
        number=num;
    }
    public void run(){
        for(int i=0;i<=5;i++){
            System.out.printf("thread %d | %d\n",number,i);

            try{
                sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
public class q21{
    public static void main(String[] args){
       Multi22 obj1 = new Multi22(1);
       Multi22 obj2 = new Multi22(2);
       obj1.start();
       obj2.start();
       //int x=2/0;//throws excepttion, but other threads ccontinue to run
    }
}