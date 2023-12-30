#define pi 3.1415926535
//#pragma warning(disable : 4996)
typedef struct {
	double real;
	double img;
	//complex* link;
}complex;

typedef struct{
	double mag;
	double ang;
}cpolar;
double argument(complex z);
cpolar polar(complex a);
complex cartesian(cpolar a);
complex add(complex a, complex b);

complex dot(complex a, complex b);
complex inv(complex a);
complex div(complex a, complex b);

void printz(complex z);
void prints(cpolar s);
