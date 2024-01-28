import javax.swing.*;
class swing{
    public static void main(String[] args) {
        JFrame f = new JFrame("welcome");
        JButton b = new JButton("Click");
        b.setBounds(130,100,100,40);
        f.add(b);
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
    }
}
