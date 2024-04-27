#include <stdio.h>
void hanoi(int, char, char, char);
int main()
{
    hanoi(3, 'A', 'B', 'C');
    getch();
    return 0;
}
void hanoi(int n, char rodFrom, char rodMiddle, char rodTo)
{
    if (n >= 1)
    {
        hanoi(n - 1, rodFrom, rodTo, rodMiddle);
        printf("Disk %d moved from %c to %c \n", n, rodFrom, rodTo);
        hanoi(n - 1, rodMiddle, rodFrom, rodTo);
    }
}