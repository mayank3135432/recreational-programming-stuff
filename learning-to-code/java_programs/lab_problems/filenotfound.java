import java.io.FileInputStream;

import javax.sound.midi.SysexMessage;
class filenotfound{
    public static void main(String[] args){
        try{
            FileInputStream fis=new FileInputStream("./abc.txt");
        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            System.out.println("Oh no! Anyways...");
        }
    }
}