#include <math.h>
#include <iostream>
using namespace std;

int main() {
	int a, b;
	int c=0, d=0;
	int x=0, y=0;
	cin >> a >>b;
	int z = a , u = b;
	if ( a == b){
		cout << a ;
	} else if ( a % b == 0){
		cout << b;
	} else if (b % a == 0){
		cout << a;
	} else {
		for (int i = 0; i <= a+i; i++){
			if (a % 2 == 0){
				a = a / 2;
				continue;
			} else if (a % 3 == 0){
				a = a/3;
				c++;
			continue;
			}else if (a % 5 == 0){
				a = a/5;
				d++;
			} else if (a <= 1) {
				c=c*3;
				d=d*5;
				d += c;
				break;
			}
		}
		for (int k = 0; k <= b+k; k++){
			if (b % 2 == 0){
				b = b / 2;
				continue;
			} else if (b % 3 == 0){
				b = b/3;
				x++;
				continue;
			}else if (b % 5 == 0){
				b = b/5;
				y++;
			} else {
				x=x*3;
				y=y*5;
				break;
			}
			x += y;
		}
		int v = 0;
		if ( x == 0 || d == 0){
			v += 1;
		}
		v = v+d+x;

		if ( z%v == 0 && b%v == 0 ){
		cout << v;
		}else{
			cout << 1 ;//edit
		}
	}

	return 0;
}
