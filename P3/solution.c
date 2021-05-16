/*
Problem 3
Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>
#include <unistd.h>

int isprime(unsigned long int);

int main(void)
{
    unsigned long int num = 600851475143, lpf = 1, divisor;
    while(num != 1){
        //printf("\nHere, Inside the loop! number->%lu, largest prime factor->%lu", num, lpf);
        for(divisor = 2; divisor <= num; ++divisor){
                if((num % divisor == 0) && (isprime(divisor) == 0)){
                    //printf("\n\t\tDivisor %lu is a prime and divides %lu", divisor, num);
                    num /= divisor;
                    if(divisor > lpf)
                        lpf = divisor;
                    break;
                }
            //printf("\n\t\tDivisor->%lu check-> %d divisor_ul-> %lu", divisor, isprime(divisor), num);
        }
    }    
    printf("\nThe largest prime factor of %lu is %lu\n", num, lpf);
}


int isprime(unsigned long int num)
{
    int check = 0;
    for(int i = 2; (i <= num/2) && (check < 1); ++i){
        //printf("\n\t\ti-> %d check-> %d", i, check);
        if(num % i == 0)
            ++check;
    }    
    if(check < 1) return 0;
    else return 1;
}
