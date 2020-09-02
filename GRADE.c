#include<stdio.h>
void main()
{
    int num,a,i,mul;
    printf("enter the percentage=");
    scanf("%d",&a);
    if(a>80)
    printf("A GRADE");
    if(a>70 && a<80)
    printf("B GRADE");
    if(a>60 && a<70)
    printf("C GRADE");
    if(a>45 && a<60)
    printf("D GRADE");
    if (a<45)
    printf("fall");
}