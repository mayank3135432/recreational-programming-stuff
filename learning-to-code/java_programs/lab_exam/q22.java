/*22. Write a java program by converting a class to the Thread(using Runnable interface)?
 */
class Multi22 implements Runnable{
    private int number;
    Multi22(int num){
        this.number = num;
    }
    public void run(){
        for(int i=0;i<=5;i++){
            System.out.printf("thread %d | %d\n",number,i);

            try{
                Thread.sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
public class q22{
    public static void main(String[] args){
        for(int i=0;i<=5;i++){
            Multi22 obj1 = new Multi22(i);
            Thread objthread = new Thread(obj1);
            objthread.start();
        }
       int x=2/0;//throws excepttion, but other threads ccontinue to run
    }
}