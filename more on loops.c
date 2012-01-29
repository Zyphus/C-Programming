#include <stdio.h>
#include <conio.h>

int main(void)
{
    int loopcount;
    int hotdogs;
    int total;
    int average;
    total=0;
    loopcount=0;
 while(loopcount<5){
                    printf("Enter number of hotdogs ate: ");
                    scanf("%d", &hotdogs);
                    total = total + hotdogs;
                    loopcount = loopcount + 1;
                    }    
 average = total/5;
 printf("total number of dogs was %d", average);
    
    getch();
}
