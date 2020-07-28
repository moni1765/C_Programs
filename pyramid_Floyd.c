#include<stdio.h>
void main()
{
	int tr,r,s,sym,x=1;
	printf("Enter the no. of ro\n");
	scanf("%d",&tr);
	for(r=1;r<=tr;r++){
		for(s=1;s<=(tr-r);s++)
	     printf(" ");
     	
	         	for(sym=1;sym<=r;sym++)

		printf("* ");
	     printf("\n");
} 
}
