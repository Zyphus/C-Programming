#include <stdio.h>
#include <conio.h>
/*createda custom function*/
int findarea(int x, int y);

int main(void)
{
int one;
int two;
scanf("%d%d", &one, &two);
printf("%d", findarea(one,two));

    getch();
    return 0;
    }
    int findarea(int x, int y)
    {
        return x * y;
        }
