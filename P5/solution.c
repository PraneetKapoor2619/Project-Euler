/*
Problem 5
Smallest Multiple

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<stdio.h>

int main(void)
{
    int num = 1;
    while(1){
        int check = 20;
        for(int i = 1; i <= 20; ++i){
            if(num % i == 0) --check;
        }
        if(check == 0) break;
        ++num;
    }
    printf("The smallest positive number that is evenly divisble by all of the numbers from 1 to 20 is %d\n", num);
    return 0;
}
