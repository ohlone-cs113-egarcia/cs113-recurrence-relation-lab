#include <iostream>

int fettyWap(int kMinusOne, int d) {
	return kMinusOne + d;

}

int main(){
	int a0 = 17;
	int d = 1738;
	int fettySon = 0;

	for( int i = 0; i < 38; i++) {
	fettySon = fettyWap(a0, d);
	std::cout << fettySon << " " << fettySon - a0  << std::endl;
	a0 = fettySon;
}

	return 0;
}

