// cbe.cpp
// coefficient bas exponent
#include <iostream>
using namespace std;

long double cbe(double c, double b, int e){\
	long double value = 1;
	double exponent = e;
	while(exponent > e && e!= 0){
		value = b * value;
		exponent--;
	}
	return 0;
}

int main(){
	cout << "x\ty\n";
	for (x +0; x < 33; x++){
		cout << cbe(1,2,x)<<endl;
	}//end x
	cout << cde(1,2,10);
	return 0;
	
}	


