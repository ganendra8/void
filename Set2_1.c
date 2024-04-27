#include <stdio.h>

int item = 5;
int array[] = {1, 3, 5, 7, 8};

void search()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (array[i] == item)
        {
            printf("Found element %d at position %d", item, i);
            break;
        }
        else
        {
            continue;
        }
    }
    if (i == 5)
    {
        printf("Item not found");
    }
}

int main()
{
    search();
    return 0;
}