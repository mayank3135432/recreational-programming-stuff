import java.io.FileInputStream;
class catchit{
    public static void main(String[] args){
        try{
            FileInputStream fis=new FileInputStream("./abc.txt");
        }
        catch(Exception e){
            System.out.println(e);
        }
        System.out.println("\n Program end... bye\n");
    }
}