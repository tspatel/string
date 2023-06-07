#include<stdio.h>
main()
{
	char email[]="trushsangani@gmail.com";
	char password[]="tr@123";
	char email1[100];
	char password1[100];
	
	printf("enter your email =");
	gets(email1);
	printf("enter your password=");
	gets(password1);	
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(password,password1)==0)
		{
			printf("login suucefull...");
		}
		else
		{
			printf("plz enter correct  password");
		}
	}
	else
	{
		printf("plz enter correct email & password");
	}
}
