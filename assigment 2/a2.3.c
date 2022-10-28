#include<stdio.h>

#include<conio.h>

int main()

{

    int a,b,c;

    printf("Enter two numbers:");

    scanf("%d %d",&a,&b);

    c=a;

    a=b;

    b=c;

    printf("Swap values are:%d %d",a,b);

    getch();

    return 0;

}
