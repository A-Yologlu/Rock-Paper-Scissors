#include <stdio.h>
#include "functions.h"

int main(void) {

    int player = 0;
    int computer = 0;
    char choice = 0;

    while (choice != 'q') {
    printf("Please choose from: (r)ock, (p)aper, (s)cissors or (q)uit: ");
    choice = read_char();

    if (choice == 'r') {
        printf("You chose rock.\n");
    } else if (choice == 'p') {
        printf("You chose paper.\n");
    } else if (choice == 's') {
        printf("You chose scissors.\n");
    } else if (choice == 'q') {
        printf("You chose to quit.\n");
        printf("Final score: You %d, me %d.\n", player, computer);
        if (player > computer) {
            printf("You win!\n");
        } else {
            printf("I won!\n");
        }
        return 0;
    } else {
        printf("Invalid choice!\n");
        printf("Please choose from: (r)ock, (p)aper, (s)cissors or (q)uit: ");
        choice = read_int();
    }

    int program = random_int(1, 3);
    if (program == 1) {
        printf("I chose rock.\n");
    } else if (program == 2) {
        printf("I chose paper.\n");
    } else if (program == 3) {
        printf("I chose scissors.\n");
    }

    if (program == 1 && choice == 's' || program == 2 && choice == 'r' || program == 3 && choice == 'p') {
        ++computer;
        printf("You lose!\n");
        printf("Score: You %d, me %d.\n", player, computer);
    } else if (program == 1 && choice == 'p' || program == 2 && choice == 's' || program == 3 && choice == 'r') {
        ++player;
        printf("You won!\n");
        printf("Score: You %d, me %d.\n", player, computer);
    } else { //if (program == 1 && player == 'r' || program == 2 && player == 'p' || program == 3 && player == 's') {
        printf("It's a draw! The score remains the same: You %d, me %d.\n", player, computer);
    }
    
    }

    return 0;
}