#include <cs50.h>
#include <stdio.h>
#include <math.h>

void validate(long cardNum);

int main(void)
{
    long cardNum = get_long("Number: ");
    validate(cardNum);
}

void validate(long cardNum)
{
    int sumOfEvenDigits=0, sumOfOddDigits=0, digit=1, doubleDigit=0, firstDigit=0, firstTwoDigit=0;
    double dCardNum=cardNum;
    
    while (cardNum>0)
    {
        if (digit%2 != 0)
        {
            sumOfOddDigits += cardNum%10;
        } else
        {
            doubleDigit = (cardNum%10)*2;
            sumOfEvenDigits += (doubleDigit/10)+(doubleDigit%10);
        }
        digit++;
        dCardNum = dCardNum/10;
        cardNum /= 10;
    }
    firstDigit=dCardNum*10;
    firstTwoDigit=dCardNum*100;
 
    int sum=sumOfEvenDigits+sumOfOddDigits;
    
    bool isValid = false;
    if (sum %10 == 0)
    {
        isValid=true;
    }
    if (isValid && (firstTwoDigit==34 || firstTwoDigit==37))
    {
        printf("AMEX\n");
    }
    else if (isValid && firstTwoDigit>=51 && firstTwoDigit<=55)
    {
        printf("MASTERCARD\n");
    }
    else if (isValid && firstDigit==4 && digit>=13)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
