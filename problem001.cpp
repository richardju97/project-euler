// My Solutions to Project Euler Problems in C++
#include <iostream>

// Find the sum of all multiples of 3 or 5 below 1000.
int problem1() {
	
// 	std::cout << "This is Problem 1\n";
	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	std::cout << sum;
	std::cout << "\n";

	return 0;
}

// Find the sum of all even Fibonacci numbers less than or equal to 4 million
int problem2() {
	
	int sum = 0;
	int previousTerm = 1;
	int currentTerm = 2;
	int nextTerm = 0;
	
	while (currentTerm <= 4000000) {
		if (currentTerm % 2 == 0) {
			sum += currentTerm;
		}
		nextTerm = previousTerm + currentTerm;
		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}
	
	std::cout << sum;
	std::cout << "\n";
	
	return 0;
}

int main() {
	
// 	std::cout << "Hello World!\n";
	
	std::cout << "Problem 1: ";
	problem1();
	
	std::cout << "Problem 2: ";
	problem2();
	
	return 0;
}