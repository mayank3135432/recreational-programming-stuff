import java.awt.*;
//import java.awt.event.WindowAdapter;
import java.awt.event.*;

class sampleAWT extends Frame{
    sampleAWT(){
        Frame Fr = new Frame("title of the world");
        Label Lb = new Label("HELLO WORLD");
        Fr.add(Lb);
        Fr.setSize(700,700);
        Fr.setVisible(true);
        addWindowListener(
            new WindowAdapter() {
                public void windowClosing(WindowAdapter e){
                    System.exit(0);
                }
            }
        );
    }
    public static void main(String args[]){
        sampleAWT ABC = new sampleAWT();

    }
}