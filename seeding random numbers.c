#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 0;
    /*(srand) will give something close to a true
    random number... therefore we can input (time) as
    a variable into the algorithm to trully generate a 
    random output*/
    srand(time(NULL));
    
    while (i < 15){
          /*random function code =(rand)...
           [printf("%d\n", 1+rand()%6);]... 
          add or take numbers away as needed to get
           desired output from random generator since
            "0" is considered as a possible outcome.*/
          
    printf("%d\n", rand());
    i++;
}
    getch();
    return 0;
        }
