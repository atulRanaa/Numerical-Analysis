#include<iostream>
#include<math.h>
using namespace std;

double f(double x){
	return 1/(1  + x*x);
} 

int main(){
    // Define your function
    double a,b,h;
    cout<<"Give Limit of integration (a,b):";
    cin>>a>>b;
    int n;
    //do{
        cout<<"Define value of h:";
        cin>>h;
        n = ceil((b-a)/h);
    //}while(n%6 != 0);
    
    double integration=0;
    for(int j=0; j<=n;j++){
    	if(j%2 == 0)
    		integration += f(a + j*h);
        else if(j%3 == 0)
            integration += 6*f(a + j*h);
    	else
    		integration += 5*f(a + j*h);
    }

    integration = (3*h*integration)/10;
    cout<<"The value of Integration of f(x) limit (a,b) is:"<<integration<<endl;
    return 0;
}
