#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random,guess;
    int times = 0;
    srand(time(NULL));

    printf("welcome to the guessing game : ");
    do
    {   
        random = rand() * 100 ;
        printf("please enter your guess");
        scanf("%d",&guess);

        if (guess < random)         
        {
            printf("guess larger number");
            times++;
        }
        if (guess > random)
        {
            printf("guess smaller number");
            times++;
        }
        if(guess == random){
            printf("congrats, you have guessed the right number .");
            printf("you score is %d attempts",&times);
        }
        

    } while (guess != random);
    printf("thanks for playing");
    printf("developed by _Nishant2552_");
}