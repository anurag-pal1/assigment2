//To rotate a digits of three digit number one position towards right
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,l,f,num,mid,req;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    l=a%10;
    f=a/100;
    num=a/10;
    mid=num%10;
    req=mid*100+l*10+f;
    printf("Required number is:%d",req);
    getch();
    return 0;

}
