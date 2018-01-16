#include<iostream>
using namespace std;

double f(double x){
	return 1/(1  + x*x);
} 

int main(){

    // Define your function
    double a,b,h;
    cout<<"Give Limit of integration (a,b):";
    cin>>a>>b;
    cout<<"Define value of h:";
    cin>>h;

    double integration=0;
    for(double i=a; i<=b; i+= h){
    	if(i==a || i==b)
    		integration += f(i);
    	else
    		integration += 2*f(i);
    }

    integration = (h*integration)/2;
    cout<<"The value of Integration of f(x) limit (a,b) is:"<<integration<<endl;

	return 0;
}