#include <stdio.h>
int main()
{
    char c;
     printf("Please Enter an alphabet: \n");
    scanf(" %c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')  {
printf("\n %c is a VOWEL.", c);
}
    else {
     printf("\n %c is a CONSONANT.", c);
}
    return 0;
}
