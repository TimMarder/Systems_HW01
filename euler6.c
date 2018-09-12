//Tim Marder
//Systems Pd04
//Work#01 -- If you're feeling rusty, apply eul.
//2018-09-11

#include <stdio.h>

int sumOfSquares() {
	
	int sum = 0;
	
	for (int i = 1; i <= 100; i++) {
		sum += (i * i);
	}
	
	return sum;
	
}


int SquareOfSums() {
	
	int total = 0;
	int square = 0;
	
	for (int i = 1; i <= 100; i++) {
		total += i;
	}
	
	square = total * total;
	
	return square;
	
}

int main() {
	
	int result = SquareOfSums() - sumOfSquares();
	
	printf("The difference between the sum of the squares and the square of the sums is %d", result);
	return result;
	
}

