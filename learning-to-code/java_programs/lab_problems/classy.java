class Box{
	double width=0;
	double height=0;
	double depth=0;
	Box(double w,double h,double d){
		width=w;
		height=h;
		depth=d;
	}
	double Voulume(){
		return(width*height*depth);
	}
}
class classy{
	public static void main(String args[]){
		Box b1=new Box(10,20,50);
		Box b2=new Box(3,6,9);
		Box b3=new Box(2,2,2);
		System.out.println(b1.Voulume());
		System.out.println(b2.Voulume());
		System.out.println(b3.Voulume());


	}
}
