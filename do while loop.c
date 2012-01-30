#include <stdio.h>
#include <conio.h>

int main(void)
{
    /*variables*/
    int eyes;
    int toes;
    /*user input*/
    printf("Enter number of eyes and toes");
    scanf("%d%d", &eyes, &toes);
    
    if(eyes == 2 || toes == 10){
    printf("you are bilateral");
    
    }else{
      printf("you are an anomally");
}
    getch();
    }
