//create c program to cheak to cheak if character enterd by a user is a voewl or consonant using a switch statement

#include<stdio.h>
#include<conio.h>

main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("%c is voewl\n",ch);
		break;
		case 'e':
		    printf("%c is voewl\n",ch);
		break;    
		case 'i':
			printf("%c is voewl\n",ch);
		break;	
		case 'o':
			printf("%c is voewl\n",ch);
		break;	
		case 'u':
			printf("%c is voewl\n",ch);
		break;	
			
		default:printf("%c is consonant",ch);
			
	}
}
