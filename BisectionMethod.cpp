// including header

#include<bits/stdc++.h>    
using namespace std;

// functions you can define your own
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
double f4(double x){
	return -1*x*x*x*x + 100*x*x*x - 20*x*x + 4*x -6;
}
int main(){
    double x0,x1,x2;
    double fx0 , fx1 , fx2;
    // taking values with checking the value of function at that point
    // weather satisfying the statement that is asking for.
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

    for(int i=0;i < 100;i++){
		fx0 = f4(x0);
		fx1 = f4(x1);
    // here gose the bisection method the center of program
	// it just like binary search( or it is a binary search, :)
        x2 = (x0+x1)/2;
        fx2 = f4(x2);

        if(fx2 < 0)  x0 = x2;
        else if(fx2 > 0) x1 = x2;
        else break; 
	}

	printf("Value of x:%0.10f\n",x2);
    printf("Value of f(x):%0.10f\n",fx2);
    return 0;
}