class palindrome{
    public static void main(String args[]){
        StringBuffer s1=new StringBuffer(args[0]);
        StringBuffer s2=new StringBuffer(s1);
        s1.reverse();
        if(String.valueOf(s1).compareTo(String.valueOf(s2))==0)
            System.out.println("Palindrome");
        else
            System.out.println("NOT Palindrome");

    }
}