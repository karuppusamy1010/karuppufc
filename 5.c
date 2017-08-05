#include <stdio.h>
int main()
{
    double n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", n3);

    return 0;
}


Example #2

#include <stdio.h>
int main()
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1>=n2)
    {
        if(n1>=n3)
            printf("%.2lf is the largest number.", n1);
        else
            printf("%.2lf is the largest number.", n3);
    }
    else
    {
        if(n2>=n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.",n3);
    }
    
    return 0;
}

This program uses nested if...else statement to find the largest number.
Example #3

#include <stdio.h>
int main()
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3)
        printf("%.2lf is the largest number.", n1);

    else if (n2>=n1 && n2>=n3)
        printf("%.2lf is the largest number.", n2);

    else
        printf("%.2lf is the largest number.", n3);

    return 0;
}

Though, the largest number among three numbers is found using multiple ways, the output of all these program will be same.

Enter three numbers: -4.5
3.9
5.6
5.60 is the largest number.

Check out these related examples:

    C Program to Find Largest Number Using Dynamic Memory Allocation
    C Program to Find Largest Element of an Array
    C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
    C Program to Check Whether a Number is Positive or Negative
    C Program to Find LCM of two Numbers
    C Program to Find Factorial of a Number
    C Program to Find GCD of two Numbers
    C Progr
