#include <stdio.h>
#include <conio.h>

int main(void)
{
    /*set array values 0-1-2-3-4...*/
   int pikus[5]={16,21,30,35,40};
   int i;
   int total=0;
   /*i will equal 0 then move to the next array value
   which equals 1 then 2 and so on....
   until it reaches 5 or 4 in assembly since 0 is considered
   as a starting point.*/
   for(i=0;i<5;i++){
   total +=pikus[i];
   }
    printf("the total number is %d", total);
    
    
    getch();
    return 0;
        }
