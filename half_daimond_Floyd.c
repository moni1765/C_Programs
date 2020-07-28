#include<stdio.h>
void main()
{
	int tr,r,s,sym;
	printf("Enter the no. of ro\n");
	scanf("%d",&tr);

	for(r=1;r<=tr;r++){
	
	for(sym=1;sym<=r;sym++)
	printf(" * ");
	printf("\n");
}
     
	for(r=sym;r!=0;r--){
		
	     for(sym=r;sym!=0;sym--)
	printf(" * ");
	printf("\n");
}
}
