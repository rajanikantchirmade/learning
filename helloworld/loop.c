#include <stdio.h>

int main()
{
    int count = 10;
    int i;

    printf("Print ascending ...\n");
    for (i = 0; i< count; i++)
    {
        printf("Count : %d\n", i);
    }

    printf("Print Descent ...\n");
    for (i = count; i > 0; i--)
    {
        printf("Count : %d\n", i);
    }

    return 0;
}