#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    float a11,a12,a13, b1;
    float a21,a22,a23, b2;
    float a31,a32,a33, b3;

    float            u11, u12, u13;
    float l21,		      u22, u23;  	
    float l31, l32,			   u33;

    float x1,	v1;
    float x2,	v2;
    float x3,	v3;


    cout<<"a11x1 + a12x2 + a13x3 = b1"<<endl;
    cout<<"give values of: a11 a12 a13 b1"<<endl;
    cin>>a11>>a12>>a13>>b1;

    cout<<"a21x1 + a22x2 + a23x3 = b2"<<endl;
    cout<<"give values of: a21 a22 a23 b2"<<endl;
    cin>>a21>>a22>>a23>>b2;

    cout<<"a31x1 + a32x2 + a33x3 = b3"<<endl;
    cout<<"give values of: a31 a32 a33 b3"<<endl;
    cin>>a31>>a32>>a33>>b3;


    u11 = a11;
    u12 = a12;
    u13 = a13;
    l21 = a21 / u11;
    u22 = a22 - l21*u12;
    u23 = a23 - l21*u13;
    l31 = a31 / u11;
    l32 = (a32 - l31*u12) / u22;
    u33 = a33 - l31*u13 - l32*u23;
/*
	LU = A
	|	1	0	0 | | u11	u12		u13 |	| a11  a12  a13 |
	|	l21	1	0 |*|	0	u22		u23 | = | a21  a22  a23 |
	|	l31 l32	1 | |	0	  0		u33 |	| a31  a32  a33 |
*/
	//  LUX = B
	//  LV = B
	// we the values of matrix L
	v1 = b1;
	v2 = b2 - l21*v1;
	v3 = b3 - l31*v1 - l32*v2;

	//	UX = V
	//Now we now the values of Matrix V as well U;

	x3 = v3 / u33;
	x2 = (v2 - u23*x3) / u22;
	x1 = (v1 - u13*x3 - u12*x2) / u11;

	cout<<"Values of x1 ,x2, x3:"<<endl;
	cout<<x1<<endl;
	cout<<x2<<endl;
	cout<<x3<<endl; 
	return 0;
}