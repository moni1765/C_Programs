#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next;
		
	}*head;
	int count;
	void main()
	{
		
		create();
		
		pos(count);
		struct node *temp;
		temp=head;
		while(temp!=0)
		{
		printf("%d \t",temp ->data);
		temp=temp->next;
		}
		printf("\ncount:%d",count);
		getch();
	}
	int create()
{
	struct node *nenode,*temp;
	head=0;
	count=0;
	int choice =1;
	while(choice!=0)
	{
		nenode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data  \t:");
		scanf("%d",&nenode -> data);
		nenode->next=0;
		if(head==0)
		{
			head=temp=nenode;}
			else
			{
				temp->next=nenode;
				temp=nenode;
				
			}
			printf("do u continue(0,1)?   :");
			scanf("%d",&choice);
			count++;
		}
	
	
}
int pos(){
	int p,i=1;
	struct node *nenode,*temp;
	nenode=(struct node *) malloc(sizeof(struct node));
	printf("Enter the positiom\t:");
	scanf("%d",&p);
	if( p>count)
	printf("invalid position");
    

else

	temp=head;
	while(i<p)
	{
		temp=temp->next;
		i++;
	}
    printf("Enter the data :");
    scanf("%d",&nenode->data);
	nenode->next=temp->next;
	temp->next=nenode;

}

