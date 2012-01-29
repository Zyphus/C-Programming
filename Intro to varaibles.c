#include <stdio.h>
#include <conio.h>

int main(void)
{
    int num1;
    int num2;
    int sum;
    printf("Enter your number:");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    sum=num1+num2;
    
    printf("The sum is %d", sum);
    
    getch();
    
    }
