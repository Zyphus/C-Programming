#include <stdio.h>
#include <conio.h>

int main(void)
{
   int pikus[5]={16,21,30,35,40};
   int i;
   int total=0;
   
   for(i=0;i<5;i++){
   total +=pikus[i];
   }
    printf("the total number is %d", total);
    
    
    getch();
    return 0;
        }
