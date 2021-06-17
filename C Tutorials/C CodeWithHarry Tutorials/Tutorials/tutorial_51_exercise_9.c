// Date 12-06-2021

//* Create Rock, Paper & Scissors Game
//* Player 1: rock
//* Player 2 (computer): scissors -->player 1 gets 1 point

//* rock vs scissors - rock wins
//* paper vs scissors - scissors wins
//* paper vs rock - paper wins
//* Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
//* Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int user_turn();
int bot_choice();
// int string_lower();

char user_choice = 0;
int computer_choice = 0;
char computer_choice_options[3] = {'r', 'p', 's'};

int main()
{
    char user_name[20];
    printf("Please enter your name to play game with Bot\n");
    gets(user_name);
    int play_again_or_not;
    int score_of_user_and_bot[2] = {0, 0};
    //* score_of_user_and_bot[0] is for user
    //* score_of_user_and_bot[1] is for bot
    int chances_user_need_to_play;

    printf("So, \"%s\" how many times you need to play with a Computer:\n", user_name);
    scanf("%d", &chances_user_need_to_play);
    getchar();

    for (int i = 1; i <= chances_user_need_to_play; i++)
    {
        user_turn();
        if (user_choice == 'r' && bot_choice(i) == 'p')
        {
            score_of_user_and_bot[1] += 1;
            printf("You lose this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'r' && bot_choice(i) == 's')
        {
            score_of_user_and_bot[0] += 1;
            printf("You won this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'r' && bot_choice(i) == 'r')
        {
            printf("This turn is draw because both playes choose same thing\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'p' && bot_choice(i) == 'r')
        {
            score_of_user_and_bot[0] += 1;
            printf("You won this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'p' && bot_choice(i) == 'p')
        {
            printf("This turn is draw because both playes choose same thing\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'p' && bot_choice(i) == 's')
        {
            score_of_user_and_bot[1] += 1;
            printf("You lose this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 's' && bot_choice(i) == 'r')
        {
            score_of_user_and_bot[1] += 1;
            printf("You lose this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 's' && bot_choice(i) == 'p')
        {
            score_of_user_and_bot[0] += 1;
            printf("You won this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 's' && bot_choice(i) == 's')
        {
            printf("This turn is draw because both playes choose same thing\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
    }
    if (score_of_user_and_bot[0] > score_of_user_and_bot[1])
    {
        //* It means that user won the match
        printf("Congraulations! You won the match by %d points\n%s\'s score: %d\nBot\'s score: %d\n", score_of_user_and_bot[0] - score_of_user_and_bot[1], user_name, score_of_user_and_bot[0], score_of_user_and_bot[1]);
    }
    else if (score_of_user_and_bot[1] > score_of_user_and_bot[0])
    {
        //* It means that bot won the match
        printf("Sorry! You lose the match by %d points\n%s\'s score: %d\nBot\'s score: %d\n", score_of_user_and_bot[1] - score_of_user_and_bot[0], user_name, score_of_user_and_bot[0], score_of_user_and_bot[1]);
    }
    else if (score_of_user_and_bot[1] == score_of_user_and_bot[0])
    {
        //* It means that the match is drawen
        printf("Unfortunately! Match has considered draw; as both players score is same i.e. %d\n", score_of_user_and_bot[0]);
    }

switch_play_again_or_not:
    printf("\nPress 0 to play the game again\nPress 1 to exit the game again\n");
    scanf("%d", play_again_or_not);
    getchar();
    switch (play_again_or_not)
    {
    case 0:
        printf("\n\n\n\n\n");
        main();
        break;
    case 1:
        exit(1);

    default:
        printf("Please chose a valid option\n");
        goto switch_play_again_or_not;
        break;
    }

    return 0;
}

int bot_choice(int n)
{
    srand(time(NULL) * n); //srand takes seed as an input and is defined inside stdlib.h
    return computer_choice_options[rand() % 3];
}

int user_turn()
{
    printf("Press R for Rock\nPress P for Paper\nPress S for Scissor\n");
    scanf("%c", &user_choice);
    getchar();
    tolower(user_choice);
    if (user_choice != 'r' && user_choice != 'p' && user_choice != 's')
    {
        printf("Please enter values in S, W, G only! Now you need to enter values again\n\n");
        user_turn();
    }
}
