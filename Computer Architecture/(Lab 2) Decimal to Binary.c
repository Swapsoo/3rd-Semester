#include<stdio.h>
#include<conio.h>
#include<math.h>

int DtoB(long n)
{
    int remainder;
    long binary=0,i=1;
    while(n!=0)
    {

        remainder=n%2;
        n=n/2;
        binary=binary+(remainder *i);
        i=i*10;
    }
    return binary;
}
int main ()
{

    long integer_num;
    printf("Enter a number:");
    scanf("%d",&integer_num);
    printf("equivalent binary number is %d",DtoB(integer_num));
    getch();

}
