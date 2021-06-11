/*
Date: 11.06.2021
Praneet Kapoor
Solution to problem 7 given at Project Euler
To find the 10001st prime number
*/
#include<stdio.h>
#include<stdlib.h>

int isprime(int);

int main(int argc, char **argv)
{
	int num = 2, counter = 0;
	while(1){
		if(isprime(num) == 0)
			++counter;
		if(counter == 10001)
			break;
		++num;
	}
	printf("The 10001st prime number is %d\n", num);
	return 0;
}

int isprime(int num)
{
	int flag = 0;
	for(int i = 1; i <= (num / 2); ++i){
		if(num % i == 0)
			++flag;
		if(flag > 1)
			return 1;
	}
	return 0;
}
