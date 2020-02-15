#include <cs50.h>
#include <stdio.h>

/* mario.c is a program that displays a block shape of user input height such as below
height: 6
     #  #
    ##  ##
   ###  ###
  ####  ####
 #####  #####
######  ######

*/

int main(void)
{
    int height;
    do
    {
       height = get_int("Height: "); 
    }
    while (height<1 || height>8);
    
    for (int i=0; i<height; i++)
    {
        for (int j=0; j<height-i-1; j++)
        {
            printf(" ");
        }
        for (int j=height-i-1; j<height; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int k=0; k<=i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
