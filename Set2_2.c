#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
void main()
{
    int num;
    clrscr();
    printf("Enter the number to be insert: ");
    scanf("%d", &num);
    printf("\n %d", factorial(num));
}