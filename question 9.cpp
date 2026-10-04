#include <stdio.h>

int main()
{
    char word[100];
    int length = 0;
    int vowels = 0;
    int consonants = 0;
    int palindrome = 1;

    printf("Enter your word: ");
    scanf("%s", word);

    printf("Original Word: %s\n", word);

    for(int i = 0; word[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length = %d\n", length);

    printf("Reverse: ");

    for(int i = length - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    printf("\n");

    for(int i = 0; i < length / 2; i++)
    {
        if(word[i] != word[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
    {
        printf("The word is a Palindrome\n");
    }
    else
    {
        printf("The word is not a Palindrome\n");
    }

    for(int i = 0; i < length; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
           word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
           word[i] == 'O' || word[i] == 'U')
        {
            vowels++;
        }
    }

    printf("Number of vowels = %d\n", vowels);

    for(int i = 0; i < length; i++)
    {
        if((word[i] >= 'a' && word[i] <= 'z') ||
           (word[i] >= 'A' && word[i] <= 'Z'))
        {
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' &&
               word[i] != 'o' && word[i] != 'u' &&
               word[i] != 'A' && word[i] != 'E' && word[i] != 'I' &&
               word[i] != 'O' && word[i] != 'U')
            {
                consonants++;
            }
        }
    }

    printf("Number of consonants = %d\n", consonants);

    return 0;
}
