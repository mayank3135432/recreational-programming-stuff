/*7. Write a java program that illustrates the concept of this reference?
 */
class Box{
    double lenght;
    double width;
    double height;
    Box(double lenght,double width,double height){
        this.lenght=lenght;
        this.width=width;
        this.height=height;
    }
    double Volume(){return(lenght*width*height);}
    void show(){
        System.out.printf("(%f,%f,%f)\n",lenght,width,height);
    }
}
class q7{
    public static void main(String[] args){
        Box obj = new Box(4, 12, 10);
        Box obj2 = new Box(12, 12, 12);
        obj.show();
        obj2.show();
    }
}