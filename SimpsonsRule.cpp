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

    int n = (int)((b-a)/h);

    double integration=0;
    for(int j=0; j<=n;j++){
    	if(j==0 || j==n)
    		integration += f(a + j*h);
        else if(j%2 == 1)
            integration += 4*f(a + j*h);
    	else
    		integration += 2*f(a + j*h);
    }

    integration = (h*integration)/3;
    cout<<"The value of Integration of f(x) limit (a,b) is:"<<integration<<endl;

	return 0;
}