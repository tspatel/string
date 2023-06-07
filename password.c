#include<stdio.h>

main()
{
	char password[50];
	int i,len,letter=0,digit=0,symbol=0;
	
	printf("enter password =");
	scanf("%s",&password);
	
	len=strlen(password);
	
	if(len<6)
	{
		printf("password must be at least 6 character long\n");
	}
	
	for(i=0;i<len;i++)
	{
		if(password[i]>='a' && password[i]<='z' || password[i]>='A' && password[i]<='Z')
		{
			letter=1;
		}
		
		else if(password[i]>='0' && password[i]<='9')
		{
			digit=1;
		}
		else
		{
			symbol=1;
		}
	}	

	if(letter==1 && digit==1 && symbol==1)
	{
		printf("valid pasword\n");
	}
	else
	{
		printf("password must contain at leasst one letter,one digit,one symbol\n");
	}
}
