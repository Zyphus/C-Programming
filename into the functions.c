#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 0;
    
    while (i < 15){
          /*random function code =(rand)*/
    printf("%d\n", 1+rand()%6);
    i++;
}
    getch();
    return 0;
        }
