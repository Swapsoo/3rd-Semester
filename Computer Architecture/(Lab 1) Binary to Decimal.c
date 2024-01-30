#include<stdio.h>
#include<conio.h>
#include<math.h>

int BtoD(long binary_num)
{
    int decimal_num=0;
    int temp=0,remainder;
    while (binary_num!=0)
    {
        remainder=binary_num%10;
        binary_num=binary_num/10;
        decimal_num=decimal_num+remainder*pow(2,temp);1010
        temp++;
    }
    return decimal_num;
}
int main()
{
    long binary_num,decimal_num;
    printf("Enter a binary number:");
    scanf("%d",&binary_num);
    printf("Equivalent decimal number is: %d",BtoD(binary_num));
    return 0;
}
