//To convert INR into USD
#include<stdio.h>
#include<conio.h>
int main()
{
    float INR,S,D=76.23;
    printf("Enter INR amount:");
    scanf("%f",&INR);
    S=INR/D;
    printf("USD amount is:%f",S);
    getch();
    return 0;

}
