#include<stdio.h>

#include<conio.h>

int main()

{

    int a,l,f,d,m,S;

    printf("Enter three digit number:");

    scanf("%d",&a);

    f=a/100;

    l=a%10;

    d=a/10;

    m=d%10;

    S=f+m+l;

    printf("Sum of the digits of given number is: %d",S);

    getch();

    return 0;

}

