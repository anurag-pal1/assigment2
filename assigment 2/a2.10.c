//To append a digit in a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,d,n;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a digit:");
    scanf("%d",&d);
    n=a*10+d;
    printf("The new number is:%d",n);
    getch();
    return 0;
}
