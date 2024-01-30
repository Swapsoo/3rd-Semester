#include<stdio.h>
#include<conio.h>
int main()
{
float x[10],f[10],y,sum=0.0,l;
int n,i,j;

printf("Input number of data:");
scanf("%d",&n);
printf("Input data points x(i)&f(i):\n");

for(i=0;i<n;i++)
{
printf("x[%d]=",i);
scanf("%f",&x[i]);
printf("f[%d]=",i);
scanf("%f",&f[i]);
}
printf("Functional Value:");
scanf("%f",&y);
for(i=0;i<n;i++)
{
    l=1;
    for(j=0;j<n;j++)
    {

        if(j!=i)
        {

            l=l*(y-x[j])/(x[i]-x[j]);

        }
    }

    sum=sum+l*f[i];
}
printf("Value at %f=%f",y,sum);
getch();
return 0;
}
