#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Variables
    int pin = 55555;
    int counter = 0;
    int much;
    char cardnumber[20];
    char money[10];
    //Providing the user with the ability to enter a card number.
    printf("Enter card number: ");
    scanf("%s", cardnumber);
    //Checking the length and the first digit of the card number entered by the user.
    int firstdigit = cardnumber[0] - '0';
    int length = strlen(cardnumber);
    //Counting the digits.
    for (int i = 0; i < length; i++)
    {
        if (cardnumber[i] >= '0' && cardnumber[i] <= '9')
        {
            counter++;
        }
    }
    //Determining the card type and validating the input.
    if (firstdigit == 4 && counter == 16)
    {
        printf("Your card is Visa.\n");
    }
    else if (firstdigit == 5 && counter == 16)
    {
        printf("Your card is Mastercard.\n");
    }
    else if (firstdigit == 3 && counter == 15)
    {
        printf("Your card is American Express.\n");
    }
    else if (firstdigit == 6 && (length == 16 || length == 19))
    {
        printf("Your card is Discover.\n");
    }
    else
    {
        printf("Invalid card.\n");
        return 0;
    }
    //Providing the option to enter the card's PIN.
    printf("Please enter the PIN *55555*: ");
    if (scanf("%d", &pin) != 1)
    {
        printf("Invalid input.\n");
    }
    else if (pin == 55555)
    {
        //Validating the correctness of the PIN, checking the account balance, and providing the ability to withdraw and deposit money.
        printf("PIN is correct.\n");
        srand(time(0));
        int randomnumber = rand() % 90000 + 10000;
        printf("You have $%d money in your account.\n", randomnumber);
        printf("What do you want to do with money? write : deposit or withdraw? ");
        scanf("%s", money);
        //Allowing for money deposits and checking the current balance.
        if (strcmp(money, "deposit") == 0)
        {
            printf("How much you want to deposit? ");
            scanf("%d", &much);
            randomnumber += much;
            printf("Current balance is %d.\n", randomnumber);
        }
        //Allowing for money withdraws and checking the current balance.
        else if (strcmp(money, "withdraw") == 0)
        {
            printf("How much you want to withdraw? ");
            scanf("%d", &much);
            if (much <= randomnumber)
            {
                randomnumber -= much;
                printf("Current balance is %d.\n", randomnumber);
            }
            //Checking if the user is trying to withdraw more money than they have in their account.
            else
            {
                printf("Insufficient balance.\n");
            }
        }
        //Validating the entered data for accuracy.
        else
        {
            printf("Invalid action.\n");
        }
    }
    //In case the PIN is incorrect, displaying an appropriate message.
    else
    {
        printf("PIN is incorrect.\n");
    }

    return 0;
}


