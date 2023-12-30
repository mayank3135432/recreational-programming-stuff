class Voter{
    int age;
    Voter(int age){
        this.age=age;
    }
    void isElidgible(){
        if(age<18){
            throw new ArithmeticException("CANNOT VOTE");
        }
        else System.out.println("ARE ALLOWED TO VOTE");
    }
}
class userexception{
    public static void main(String[] args) {
        Voter obj = new Voter(12);
        obj.isElidgible();;
    }
}