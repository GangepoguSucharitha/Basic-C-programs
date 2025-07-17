//determine whether a given character is a vowel or a consonant using the conditional (ternary) operator:

#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it's a vowel or consonant using conditional operator
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        ? printf("%c is a vowel.\n", ch) 
        : ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
            ? printf("%c is a consonant\n", ch) 
            : printf("%c is not an alphabet\n", ch);

}

/*Explanation:
Vowel Check: The first condition checks if the character is one of the vowels (both uppercase and lowercase).
Consonant Check: The second condition ensures the character is an alphabet but not a vowel.
Non-Alphabet Check: If neither of the above conditions is true, it outputs that the character is not an alphabet.*/

