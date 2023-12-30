class Box{
    double l;
    double w;
    double h;
    Box(double l,double w,double h){
        this.l=l;
        this.w=w;
        this.h=h;
    }
    double volume(){
        return(l*w*h);
    }
}
class q17{
    public static void main(String[] args){
        Box B1=new Box(1,4,2);
        Box B2=new Box(4,1.2,7);
        double v=B1.volume();
        System.out.println(v);
        v=B2.volume();
        //System.out.println(B1);
        
    }
}