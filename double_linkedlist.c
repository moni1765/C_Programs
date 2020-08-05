#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * preptr;
    struct node * nextptr;
}*stnode, *ennode;
 

void doublelinkedlist(int n);
void displayDlList();

int main()
{
    int n;
    stnode = NULL;
    ennode = NULL;

    printf(" Input the no. of nodes : ");
    scanf("%d", &n);
 
    doublelinkedlist(n); 
    displayDlList();
    return 0;
}
 
void doublelinkedlist(int n)
{
    int i, data;
    struct node *fnNode;
 
    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));
 
        if(stnode != NULL)
        {
            printf(" Input data for node 1 : "); 
            scanf("%d", &data);
 
            stnode->data = data;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &data);
                    fnNode->data = data;
                    fnNode->preptr = ennode;    
                    fnNode->nextptr = NULL;
 
                    ennode->nextptr = fnNode;   
                    ennode = fnNode;            
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void displayDlList()
{
    struct node * temp;
    int n = 1;
    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        temp = stnode;
        printf("\n\n Data entered on the list are :\n");
 
        while(temp != NULL)
        {
            printf("  %d\t", n, temp->data);
            n++;
            temp = temp->nextptr; 
        }
    }
}


