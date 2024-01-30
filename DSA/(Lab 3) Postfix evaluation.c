#include<stdio.h>
#include<conio.h>
#include<math.h>

int evaluate_post(char*);
int isoperand(char);
int isoperator(char);
int main()
{
	char post [30];
	int rs;
	printf("Enter postfix expression:");
	gets(post);
	rs=evaluate_post(post);
	printf("Result of evalaution is %d",rs);
	getch();
	return 0;
	
}

int evaluate_post (char *post)
{
	int i,top=-1;
	int n,opndstk[10],opnd1,opnd2;
	while (*post!='\0')
	{
		if(isoperand(*post))
		{
			printf("Enter value of %c = ",*post);
			scanf("%d",&n);
			opndstk[++top]=n;
		}
		else if (isoperator (*post))
		{
			opnd2=opndstk[top--];
			opnd1=opndstk[top--];
			switch(*post)
			{
				case '+':
					opndstk[++top]=opnd1+opnd2;
					break;
					
				case '-':
					opndstk[++top]=opnd1-opnd2;
					break;
						
				case '*':
					opndstk[++top]=opnd1*opnd2;
					break;
					
				case '/':
					opndstk[++top]=opnd1/opnd2;
					break;
					
				case '$':
					n=pow(opnd1,opnd2);
					opndstk[++top]=n;
					break;		
			}
		}
		post++;
	}
	return(opndstk[top]);
}

int isoperand(char ch)
{
	if (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	return 1;
	else 
	return 0;
}
int isoperator(char ch)
{
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='$')
return 1;
else
return 0;
}
