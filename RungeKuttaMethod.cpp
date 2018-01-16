#include<iostream>
using namespace std;

double f(double x,double y){
	return x*y + 1;
}
double f1(double x, double y){
	return 3*x + y/2;
}
int main(){
	//Suppose dy/dx = f(x,y) and y = y0 when x=x0 
	double x0,y0;
	double xn,yn;
	double k1,k2,k3,k4, k;
	cout<<"Provide initial (x0,y0) whose differential equ is defined:";
 	cin>>x0>>y0;
 	cout<<"Enter the value of x for which you need to find out the y=?:";
 	cin>>xn;

 	double h = (xn-x0)/5;
 	yn = y0;
 	for(double xi = x0 ; xi < xn ; xi += h){
 		k1 = h*f(xi , yn);
 		k2 = h*f(xi + h/2, yn + k1/2);
 		k3 = h*f(xi + h/2, yn + k2/2);
 		k4 = h*f(xi + h/2, yn + k3);

 		k = (k1 + 2*k2 + 2*k3 + k4)/6;

 		yn = yn+k;
 	}

 	printf("Value of y at x=%f is %0.4f when h: %f\n",xn , yn, h);
	return 0;
}