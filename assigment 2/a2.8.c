#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    int x,y,z,t;
    x=sizeof(a);
    y=sizeof(b);
    z=sizeof(c);
    t=sizeof(d);
    printf("Size of integer type data:%d ",x);
    printf("\nSize of character type data:%d",y);
    printf("\nSize of float type data:%d",z);
    printf("\nSize of double type data:%d",t);
    getch();
    return 0;
}
