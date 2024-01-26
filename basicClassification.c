#include <stdio.h>

int isPrime(int N){
	
	// initially, flag is set to true or 1 
	int flag = 1; 

	// loop to iterate through 2 to N/2 
	for (int i = 2; i <= N / 2; i++) { 

		// if N is perfectly divisible by i 
		// flag is set to 0 i.e false 
		if (N % i == 0) { 
			flag = 0; 
			break; 
		} 
	} 

	if (flag) { 
		return 1;
	} 
	else { 
		return 0;
	} 

	return 0; 
} 



int factorial(int val)
{
int x, y = 1;
for (x = 1; x <= val; x++)
{
y = y * x;
}
return y;
}


int isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    int temp;
    while (num != 0) {
        temp = num % 10;
        int fact = 1;
        for (int i = 1; i <= temp; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}






