/*
Multiples of 3 and 5
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<stdio.h>

int main(void)
{
    int num = 1, sum = 0;
    while(num < 1000){
        if((num % 3 == 0)
            || (num % 5 == 0))
            sum += num;
        ++num;
    }
    printf("The sum of all the multiples of 3 or 5 below 1000 = %d\n", sum);
    return 0;
}
