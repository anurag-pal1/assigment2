//To make last digit stored in variable as zero
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,num,l;
    printf("Enter a number:");
    scanf("%d",&a);
    num=a/10;
    l=num*10;
    printf("Required number is:%d",l);
    getch();
    return 0;
}
