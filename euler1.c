//Tim Marder
//Systems Pd04
//Work#01 -- If you're feeling rusty, apply eul.
//2018-09-11

#include <stdio.h>

int main() {
	
    int sum = 0;
    
    for (int num = 1 ; num < 1000 ; num++) {
		if ((num % 3 == 0) || (num % 5 == 0)) {
			sum += num;
		}
	}

    printf("The sum of all multiples of 3 and 5 below 1000 is %d", sum);
    return sum;
	
}