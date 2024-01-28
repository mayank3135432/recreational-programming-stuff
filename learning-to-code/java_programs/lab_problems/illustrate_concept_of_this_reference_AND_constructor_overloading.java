class Box{
	double w;
	double h;
	double d;
	//w,d,h are instance variables
	Box(){
		w=0;
		h=0;
		d=0;
	}
	Box(double w,double h,double d){
		this.w=w;//make use of "this" when a local parametre and instance variable share the same
		this.h=h;
		this.d=d;
	}
	double Voulume(){
		return(w*h*d);
	}
}
class illustrate_concept_of_this_reference_AND_constructor_overloading{
	public static void main(String args[]){
		Box b1=new Box(10,20,50);
		Box b2=new Box(3,6,9);
		Box b3=new Box();//using default constructor
		System.out.println(b1.Voulume());
		System.out.println(b2.Voulume());
		System.out.println(b3.Voulume());


	}
}
