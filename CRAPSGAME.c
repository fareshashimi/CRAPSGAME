#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(){
    int die1 = rand()%6 + 1;
    int die2 = rand()%6 + 1;

    return die1 + die2;
}

int main(){
    int sum = 0;
    int point = 0;

    srand(time(NULL));
    printf("                            Welcome to Crapsgame!!!\n");

    //First roll.
    sum = rollDice();
    printf("\nYou're rolled: %d\n", sum);

    //Checking the first roll of dice.
    if((sum==7) || (sum==11)){
        printf("\nCongratulations! You win.\n");
        return 0;
    }
    else if((sum==2) || (sum==3) ||(sum==12)){
        printf("\nSorry dude, you lose.\n");
        return 0;
    }
    else{
        point = sum;
        printf("\nYour points is %d\n", point);
    }

    //Roll until the player wins or loses.
    while(1){
        sum = rollDice();
        printf("\n\nYou rolled: %d\n", sum);

        if(sum==7){
            printf("\nSorry dude,  You lose.\n");
            break;
        }
        else if(sum==point){
            printf("\nCongratulations! You win!\n");
            break;
        }
    }

    return 0;
}
