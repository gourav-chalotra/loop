// while loop

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);

    while (a <= 100)
    {
        printf("Heloo %d\n", a);
        a++;
    }
    return 0;
}