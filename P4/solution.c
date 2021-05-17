/* 
Problem 4
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<stdio.h>
#include<math.h>

int ispallindrome(int);

int main()
{
    int lpf = 0;
    for(int p1 = 100; p1 < 1000; ++p1){
        for(int p2 = 100; p2 < 1000; ++p2){
            if(ispallindrome(p1 * p2) == 0){
                if (lpf < (p1 * p2)) lpf = p1 * p2;
                }
            }
        }
    printf("The largest pallindrome made by multiplication of two three digit number is: %d\n", lpf); 
    return 0;
}

int ispallindrome(int num)
{
    int N = (int)(ceil(log10(num))),
        check = 0;
    char snum[N];
    sprintf(snum, "%d", num);
    for(int i = 0; i <= (N - 1)/2; ++i){
        if(snum[i] != snum[N - i - 1])
            ++check;
    }
    if(check > 0) return 1;
    else return 0;
}
