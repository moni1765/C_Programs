#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next;
		
	}*head,*temp;
		int count;
	void main()
	{
		
		create();
		printf("LINKED LIST\t\t:");
		display();
		reverselist();
		printf("\nREVERSED LINKEDLIST\t:");
		display();
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
			printf("Enter the Data  \t:");
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
				printf("continue(0,1)?   :");
				scanf("%d",&choice);
				count++;
		}
    }
    
	int reverselist()
    {
	    struct node *prevNode, *curNode;
	
	    if(head != NULL)
	    {
	        prevNode = head;
	        curNode = head->next;
	        head = head->next;
	
	        prevNode->next = NULL; 
	
	        while(head != NULL)
	        {
	            head = head->next;
	            curNode->next = prevNode;
	
	            prevNode = curNode;
	            curNode = head;
	        }
	
	        head = prevNode; 
	    }
    }
    
	int display()
	{
		temp=head;
		while(temp!=0)
		{
		printf("%d \t",temp ->data);
		temp=temp->next;
		}
	}


