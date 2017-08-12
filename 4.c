#include <stdio.h>
int main()
{
    char k;
    printf("Enter a character: ");
    scanf("%c",&k);
    if( (k>='a' && k<='z') || (k>='A' && k<='Z'))
        printf("%c is an alphabet.",k);
    else
        printf("%c is not an alphabet.",k);
    return 0;
}
