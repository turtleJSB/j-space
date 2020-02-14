#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

bool isAllAlpha(string str);
bool noSameAlpha(string str);
void cipher(string key, string text);

int main(int argc, string argv[])
{
    // only allow one command line argument
    if (argc !=2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // only allow alphabet letters
    else if (!isAllAlpha(argv[1]))
    {
        printf("Keys must contain only letters.\n");
        return 1;
    }
    // only allow 26 alphabet characters
    else if (isAllAlpha(argv[1]) && strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    // only allow non-repetitive characters
    else if (!noSameAlpha(argv[1]))
    {
        printf("Key must not repeat the same characters.\n");
        return 1;
    }
    // proceed to cipher the original text
    else
    {
        string key = argv[1];
        string plainText = get_string("plaintext: ");
        
        printf("ciphertext: ");
        cipher(key, plainText);
        return 0;
    }
}
// a function to cipher a text
void cipher(string key, string text)
{
    int index=0;
    for (int i=0; i < strlen(text); i++)
    {
        // check if char is uppercase
        if (isupper(text[i]))
        {
            // convert char to lower case, then find its order, then convert it to new letter using cipher key
            index=tolower(text[i])-97;
            printf("%c", toupper(key[index]));
        } 
        // check if char is lowercase
        else if (islower(text[i]))
        {
            // find char's order, then convert it to new letter using cipher key
            index=text[i]-97;
            printf("%c", tolower(key[index]));
        }
        // check if char is non-letter
        else
        {
            // print char as it is without converting
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
// a function to check if every char is an alphabet letter
bool isAllAlpha(string str){
    for (int i=0; i<strlen(str); i++)
    {
        if (!isalpha(str[i]))
        {
            return false;
        }
    }
    return true;
} 
// a function to check if there is no same char
bool noSameAlpha(string str)
{
    for (int i=0; i < strlen(str); i++)
    {
        for (int j = i+1; j < strlen(str); j++)
        {
            if (str[i]==str[j])
            {
                return false;
            }
        }
    }
    return true;
}
