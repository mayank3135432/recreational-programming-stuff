import java.awt.*;
import java.awt.event.*;
class pushbutton extends Frame{
    pushbutton(){
        Button B = new Button("CLICK");
        B.setBounds(30,80,100,30);
        add(B);
        setSize(500,500);
        setLayout(null);
        setVisible(true);

        addWindowListener(
            new WindowAdapter(){
                public void windowClosing(WindowEvent e){
                    System.exit(0);
                }
            }
        );
    }
    public static void main(String[] args){
        pushbutton PB = new pushbutton();
    }
}