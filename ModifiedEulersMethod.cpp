#include<iostream>
#include<math.h>
using namespace std;

double f(double x,double y){
	return x+y;  // dy/dx = x + y
}
double f1(double x,double y){
	return log2(x+y);
}
int main(){
	// COde for solving Ordinary differential equations
	//     dy/dx = f(x,y) 
	//Define your equation

	//Given y(x0) = y0
	//Need to find y(xn) = yn
	double x0,y0;
	double xn,yn;

 	cout<<"Provide initial (x0,y0) whose differential equ is defined:";
 	cin>>x0>>y0;
 	cout<<"Enter the value of x for which you need to find out the y=?:";
 	cin>>xn;

 	double h = (xn-x0)/5;
 	yn = y0;
 	for(double xi = x0;xi < xn; xi += h){
 		cout<<xi<<" "<<yn<<endl;
 		double YnPrevious = yn;

 		yn = yn + h*f(xi , yn);
 		for(int i=0;i<5;i++){
 			yn = YnPrevious + h*( f(xi,YnPrevious) + f(xi+h,yn))/2;
 		}
 	//  Yn = Yn-1 + h*f(Xn-1,Yn-1) 
 	}

 	printf("Value of y at x=%f is %0.4f when h: %f\n",xn , yn, h);
	return 0;
}