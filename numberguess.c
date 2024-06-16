#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random,guess;
    int times = 0;
    srand(time(NULL));

    printf("welcome to the guessing game : \n");
    do
    {   
        random = rand() * 100 ;
        printf("please enter your guess \n");
        scanf("%d",&guess);

        if (guess < random)         
        {
            printf("guess larger number \n");
            times++;
        }
        if (guess > random)
        {
            printf("guess smaller number \n");
            times++;
        }
        if(guess == random){
            printf("congrats, you have guessed the right number . \n");
            printf("you score is %d attempts \n",&times);
        }
        

    } while (guess != random);
    printf("thanks for playing \n");
    printf("developed by _Nishant2552_ \n");
}