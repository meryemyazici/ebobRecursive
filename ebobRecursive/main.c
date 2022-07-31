#include <stdio.h>
#include <stdlib.h>

int ortakbol(int a,int b){

    if(b !=0)
        return ortakbol(b,a%b);
    else
        return a;
}

int main()
{
    int a,b;
    printf("1.sayi ");
    scanf("%d",&a);
    printf("2.sayi ");
    scanf("%d",&b);

    printf("%d",ortakbol(a,b));
}
