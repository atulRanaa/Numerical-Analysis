// including headers
#include<bits/stdc++.h>
using namespace std;
// function add your own for which you are working.
double f0(double x){
	return x*x*x - x -1;
}
double f1(double x){
    return x*log10(x)-1.2;
}
double f2(double x){
    return x*exp(x)-2;
}
double f3(double x){
	return x*x*x*x*x*x - x*x*x*x - x*x*x -1;
}
// you can use pow function may be faster then is multiplication.
double f4(double x){
	return -1*x*x*x*x + 100*x*x*x - 20*x*x + 4*x -6;
}
int main(){
    double x0,x1,x2;
    double fx0 , fx1 , fx2;
    // worning: enter the value seeing the value that double type and function that you are using
    // can store actually i am trying 10^6 with f3 ..HAHa :)
    do{
	    cout<<"Give value of x where f(x) is -ve:"<<endl;
	    cin>>x0;
	}while( f4(x0) > 0 );

	if( f4(x0) == 0){
		cout<<"You already got the ans. :)"<<endl;
		return 0;
	}

    do{
    	cout<<"Give value of x where f(x) is +ve:"<<endl;
    	cin>>x1;
	}while( f4(x1) < 0 );

	if( f4(x1) == 0){
		cout<<"You already got the ans. :)"<<endl;
		return 0;
	}
    // one more thing to tell about the algorithm result may differ for different interval (a,b)
    // reason for that may be higher order equation.
    for(int i=0;i < 100;i++){
		fx0 = f4(x0);
		fx1 = f4(x1);
        x2 = (x1*fx0 - x0*fx1)/(fx0 - fx1);
        fx2 = f4(x2);

        if(fx2 < 0)  x0 = x2;
        else if(fx2 > 0) x1 = x2;
        else break; 
	}

	printf("Value of x:%0.10f\n",x2);
    printf("Value of f(x):%0.10f\n",fx2);
    return 0;
}