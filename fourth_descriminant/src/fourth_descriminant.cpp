
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c;
	double x1, x2;
	double D;
	cin >> a >> b >> c;
	if (a == 0 && b == 0){
		return 0;
	}
	else if (a == 0){
		c *= -1;
		x1 = c/b;
		cout<<x1;
	}else{
	D = b*b - 4 * a * c;
	if (D < 0){
		return 0;
	}else if ( D > 0){
		x1 = (b*(-1) + sqrt(D))/(2*a);
		x2 = (b*(-1) - sqrt(D))/(2*a);
		cout<<x1<<" "<<x2;
	}else{
		x1 = x2 = b*(-1)/(2*a);
		cout<<x1<<endl;
	}
	}
	return 0;
}
