#include<stdio.h>
#include<stdlib.h>

//structure
struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;

//push
void push(int value)
{   
    
    
	struct node *nn;
	nn = (struct node*)malloc(sizeof(struct node));
	nn->data = value;
	nn->next = top;
	top = nn;
	printf("%d pushed\n",nn->data);
}

//pop
void pop() 
{   if(top == NULL)
    printf("Stack is underflowing!!");
    
	struct node *temp;
	temp = top;
	printf("%d deleted\n",top->data);
	top = top->next;
	free(temp);

}

//peek
void peek()
{   if(top == NULL)
    printf("Stack is empty!!");
    
	struct node *temp;
	temp = top;
	
	printf("%d is the top value\n",temp->data);
}


//display
void display()
{	 if(top == NULL)
    printf("Stack is empty!!");
    
	struct node *temp;
	temp = top;
	printf("----displaying----\n");
	while(temp!= NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

int main()
{   
    printf("---MENU---\n");
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");

 int choice;
 
do{
    printf("Enter choice : ");
 scanf("%d",&choice);
 
 switch(choice)
 {
 case 1:
 {
 	printf("Enter value to insert : ");
 	int v;
 	scanf("%d",&v);
 	push(v);
    break;
}

case 2:
	pop();
	break;
	
case 3:
peek();
break;

case 4:
display();
break;

case 5:
return 0;
break;

default:
	printf("invalid");
	break;
	
	
}
}while(choice != 5);
  

}

