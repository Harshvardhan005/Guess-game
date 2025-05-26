#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomnumber=(rand() %100)+ 1;
    int number_of_guesses =0;
    int guess_number;

    do{
        printf("Guess the number :");
        scanf("%d",&guess_number);
        if(guess_number > randomnumber){
            printf("Please guess the smaller number\n");
        }else if(guess_number < randomnumber){
            printf("Please guess the larger number\n");
        }else{
            printf("Congratulations!! \n");
        }
        number_of_guesses++;
        
    }while(guess_number != randomnumber);
    printf("You guessed the number in %dth times",number_of_guesses);

    return 0;
}