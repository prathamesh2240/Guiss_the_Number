#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secretNumber, num, attempts=5; 
    srand(time(0));  // Seed for random number generation
    secretNumber=(rand()%10)+1;  // Random number between 1 and 10
    
    printf("===== Guess The Number =====\n");
    printf("Welcome to Game!\n");
    printf("I have chosen a number between 1 and 10.\n");
    printf("You have %d attempts to guess the correct Number.\n\n",attempts);
    
    printf("===== Game Start =====\n");
    for (int i=1; i<=attempts; i++) 
    {
        printf("Attempt %d: Enter your Number: ", i);
        scanf("%d", &num);

        if (num==secretNumber) 
        {
            printf("Congratulations! You win the game. \nYou guessed the correct number."); 
        return 0; 
        } else if (num > secretNumber) 
            {
                printf("It's lower than that.\n");
            } else 
                {
                    printf("It's higher than that.\n");
                }

        if (i < attempts) 
        {
            printf("Try again! You have %d attempts left.\n\n", attempts - i);
        } 
        else
        {
            printf("\nSorry, you lose the game.\n");
            printf("The correct number is: %d\n", secretNumber);
        }
    }

    return 0;
}