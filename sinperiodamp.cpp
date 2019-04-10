// g++ sinperiodamp.cpp -o sinperiodamp.o
#include <iostream>
#include<cmath>
using namespace std;

double round4(double var)
{	double value;
	if (var < 0){
		value = (int)(var * 10000 - 0.0005);
		}
	elssinperiodamp.o
e{
		value = (int)(var * 10000 + 0.0005);
	}
	return (double)value /10000;
}

int main (){
double PI=3.14159265;
double a,p,t, rad, sr, aspr;
//t(theta) rad(radian) sr(sine result)
//aspr (amplitude * sine (period*t))
	cout<<"\nInput an amplitude : ";
	cin>>a;
	cout<<"\nInput a period : ";
	cin>>p;
	cout <<"\nTheta\tsin(t)\ta*sin(pt) \n";
	for ( t=0 ; t<=360 ; t = t + 15 ){
		rad = t * (PI / 180);
		sr= sin(rad);
		aspr = a*sin(p*rad);
		cout<<t<<"\t"<< sr<<"\t\t"<<round4(aspr)<<"\n";
	}
	return 0;
}
    
