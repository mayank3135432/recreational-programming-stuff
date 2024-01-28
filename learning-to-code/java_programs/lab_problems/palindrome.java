class palindrome{
    public static void main(String[] args){
        StringBuffer s1=new StringBuffer(args[0]);
        StringBuffer s2=new StringBuffer(s1);
        s1.reverse();
        System.out.println(s1);
        System.out.println(s2);
        int x=String.valueOf(s1).compareTo(String.valueOf(s2));
        if(x==0) System.out.println(s2 +" is palindrome");
        else System.out.println(s2 +" not palindrome");

    }
}