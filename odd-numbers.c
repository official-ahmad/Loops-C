#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()

{
    int a = 1, count = 0;
    while (a <= 100)
    {
        if (a % 2 != 0)
        {
            printf("%d\n", a);
            count++;
        }
        a++;
    }
    printf("Total counts are = %d", count);
    getch();
}