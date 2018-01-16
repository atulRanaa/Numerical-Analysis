#include<iostream>
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
	
	char ch;
	cout<<"Want to provide initial values of x,y,z (y/n):";
	cin>>ch;

	if(ch == 'y'){
		cout<<"Give initial values of x,y,z"<<endl;
		cin>>x>>y>>z;
	}
	else{
		x=0;y=0;z=0;
	}
	for(int i=0;i<15;i++){
		x = (d1 - b1*y - c1*z)/a1;
		y = (d2 - a2*x - c2*z)/b2;
		z = (d3 - a3*x - b3*y)/c3;
		cout<<x<<" "<<y<<" "<<z<<endl;
	}

	printf("\nValues of (x,y,z) correct upto 4 decimal places: %0.4f %0.4f %0.4f\n",x,y,z);
	return 0;
}