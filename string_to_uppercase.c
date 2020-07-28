#include <stdio.h>
 
void main()
{
  	char text[100];
  	int i;
 
  	printf("\n Please Enter the text :  ");
  	scanf("%s",&text);
  	
  	for (i = 0; text[i]!='\0'; i++)
  	{
  		if(text[i] >= 'a' && text[i] <= 'z')
  		{
  			text[i] = text[i]-32;
		}
  	}

  	printf("\n UpperCase = %s", text);
  	

}


