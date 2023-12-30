/*
24. Write a java program to implement inter thread communciation?
*/
class BankCust{
    private int amount=0;
    BankCust(int amount){
        this.amount=amount;
    }
    synchronized void withdraw(int amount){
        if(this.amount<amount){
            //throw new ArithmeticException("Not Enough Balance");
            System.out.println("Less Balance ,Waiting for Deposit");
            try{
                wait();
            }catch(InterruptedException e){}            
        }
        this.amount=this.amount-amount;
        System.out.println("Amount Withdrawn");
    }
    synchronized void deposit(int amount){
        this.amount=this.amount+amount;
        System.out.println("Deposited");
        notify();
    }

}
class q24{
    public static void main(String[] args) {
        final BankCust obj1 = new BankCust(90);
        new Thread(){
            public void run(){
                obj1.withdraw(100);
            }
        }.start();
        new Thread(){
            public void run(){
                obj1.deposit(100);
            }
        }.start();
    }
}