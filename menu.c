 #include<stdio.h>
#include<stdlib.h>
#include<string.h>

void hello()
{
	printf("hello user!\n");
}
void add() 
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=a+b;
	printf("%lf\n",c);	
}
void mul()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=a*b;
	printf("%lf",c);
}
void sub()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=a-b;
	printf("%lf",c);
}
void divi()
{
	double a,b,c;
    scanf("%lf %lf",&a,&b);
	c=a/b;
	printf("%lf",c);
}
void opp()
{
	double a,b;
	scanf("%lf",&a);
	b=-a;
	printf("%lf",b);
}

int main()
{
	char cmd[128];
	while (1)
	{
		scanf("%s", cmd);
		if (strcmp(cmd, "help")==0)
		{
			hello();
		}
		else if (strcmp(cmd, "add")==0)
		{
			add();
		}
		else if (strcmp(cmd, "mul")==0)
		{
			mul();
		}
		else if (strcmp(cmd, "sub")==0)
		{
			sub();
		}
		else if (strcmp(cmd, "divi")==0)
		{
			divi();
		}
		else if (strcmp(cmd, "opp")==0)
		{
		    opp();
		}
		else if (strcmp(cmd, "quit")==0)
		{
			exit(0);
		}
		else 
		{
			printf("ERROR!");
		}
		return 0;
	}
}

