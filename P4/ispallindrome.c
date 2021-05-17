/*
Praneet Kapoor
17.05.2021

A program to check whether the entered no. is a pallindrome or not.
*/

#include<stdio.h>
#include<math.h>

int ispallindrome(int);

int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(ispallindrome(num) == 0)
        printf("This is a pallindrome\n");
    else
        printf("This is not a pallindrome\n");
    return 0;
}
    
int ispallindrome(int num)
{
    int N = (int)(ceil(log10(num))),
        check = 0;
    printf("N->%d, N - 1/ 2-> %d\n", N, (N - 1)/2);
    char snum[N];
    sprintf(snum, "%d", num);
    printf("snum->%s\n", snum);
    for(int i = 0; i <= (N - 1)/2; ++i){
        if(snum[i] != snum[N - i - 1])
            ++check;
    }
    if(check > 0) return 1;
    else return 0;
}
