#include <iostream>

int collatzSeq(int prevTerm){
    if (prevTerm == 1) {
        return 1;
    } 
    if (prevTerm % 2 == 0 ){
        return prevTerm/2;
    } else {
        return 3*prevTerm + 1;
    }
}

int main(){
    for (int i = 2; i<=10; i++){
        int counter = 0, next = i;
        std::cout << i << " ";
        do  {
            next = collatzSeq(next);
            counter++;
            std::cout << next << std::endl;
        } while ( next != 1);
        std::cout << " count was " <<  counter << std::endl;
    }
}
