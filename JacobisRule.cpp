#include<iostream>
#include<math.h>
using namespace std;

int main(){

	double a1, b1, c1,  x, d1;
	double a2, b2, c2,  y, d2;
	double a3, b3, c3,  z, d3;
	//                AX = D

	cout<<"EQuation 1: a1x + b1y + c1z = d1 (a1 != 0)"<<endl;
	cin>>a1>>b1>>c1>>d1;
	cout<<"EQuation 2: a2x + b2y + c2z = d2 (b2 != 0)"<<endl;
	cin>>a2>>b2>>c2>>d2;
	cout<<"EQuation 3: a3x + b3y + c3z = d3 (c3 != 0)"<<endl;
	cin>>a3>>b3>>c3>>d3;
	
	
	char ch='n';
	double xpre=0,ypre=0,zpre=0;

	cout<<"Want to provide initial values of x,y,z (y/n):";
	cin>>ch;
	if(ch == 'y'){
		cout<<"Give initial values of x,y,z"<<endl;
		cin>>xpre>>ypre>>zpre;
	}
	
	for(int i=0;i<10;i++){
		x = (d1 - b1*ypre - c1*zpre)*(1/a1);
		y = (d2 - a2*xpre - c2*zpre)*(1/b2);
		z = (d3 - a3*xpre - b3*ypre)*(1/c3);
		
		x = round(x*10000.0)/10000.0;
		y = round(y*10000.0)/10000.0;
		z = round(z*10000.0)/10000.0;
		xpre = x; ypre = y; zpre = z;
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	printf("\nValues of (x,y,z) correct upto 4 decimal places: %0.4f %0.4f %0.4f\n",x,y,z);
	return 0;
}
