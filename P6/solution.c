/* 
Problem 6
Sum square difference

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<stdio.h>

int main(void) 
{
    int sum_of_squares = 0, square_of_sum = 0;
    for(int n = 1; n <= 100; ++n){
        sum_of_squares += (n * n);
        square_of_sum += n;
    }
    square_of_sum *= square_of_sum;
    printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum = %d\n", square_of_sum - sum_of_squares);
    return 0;
}
