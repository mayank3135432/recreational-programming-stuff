class baa extends Thread{
    private int num;
    baa(int num){
        this.num=num;
    }
    public void run(){
        for(int i=0;i<5;i++){
            System.out.printf("%d :: %dth-HeyyHii\n",num,i);
            System.out.println("----------------");
            try{Thread.sleep(1000);}catch(InterruptedException e){e.printStackTrace();}
        }

        
    }
}
class threadbaa{
    public static void main(String[] args) {
        baa obj1 = new baa(1);
        baa obj2 = new baa(2);
        obj1.start();
        obj2.start();
    }
}