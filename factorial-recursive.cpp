#include <iostream>

int factorialSeq(int aKMinusOne, int k){
	return aKMinusOne * k;
}

int main(){
	int prevTerm = 1;
	int nextTerm = 0;
	
	for( int i = 1; i <= 10; i++){
		nextTerm = factorialSeq(prevTerm, i + 1);
		std::cout << nextTerm << std::endl;
		prevTerm = nextTerm;

}
	return 0;
}

