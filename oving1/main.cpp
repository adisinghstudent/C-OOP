// Øving 1
// Oversettelse fra Python til C++
#include "std_lib_facilities.h"

int maxOfTwo(int a, int b)   {
    // BEGIN: 2a
	if (a > b) {
        return a;
    } else {
        return b;
    }
    // END: 2a
}

int fibonaccisum(int n) {
    // BEGIN: 2c
    if (n <= 1) {
        return n;
    }
    return fibonaccisum(n-1) + fibonaccisum(n-2);  // using recursion
    // END: 2c
}

int squareNumberSum(int number) {
    // BEGIN: 2d
    for()
    // END: 2d
}

void triangleNumbersBelow(int number) {
    // BEGIN: 2e

    // END: 2e
}

bool isPrime(int number) {
    // BEGIN: 2f
    if (number / number == 1 && number)
    // END: 2f
}

void naivePrimeNumberSearch(int maxNumber) {
    // BEGIN: 2g

    // END: 2g 
}

void inputAndPrintNameAndAge() {
    // BEGIN: 2h

    // END: 2h
}

int main() {
    // BEGIN: 2b
    cout << fibonaccisum(3) << endl;
    // END: 2b
	return 0;
}
