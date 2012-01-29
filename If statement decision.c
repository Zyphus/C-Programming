#include <stdio.h>
#include <conio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(age >= 60)
    {
               printf("Sorry youre too old to subscribe... : (");
               }
    else if(age >= 40 && age <60)
               {
                    printf("please submit full body picture to 123@hushmail.com to be considered for subscription");
               }
    else if(age >= 18 && age <40)
               {
                   printf("hey hey hey! welcome :)");
               }                     
    getch();
    
    }
