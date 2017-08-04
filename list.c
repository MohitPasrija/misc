#include<stdio.h>
#include<malloc.h>

typedef struct node{
	int data;
	struct node* next;
}node;



void push_node(node** head,int data)
{
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = (*head);
	(*head) = temp;
}

void append_node(node** head,int data)
{
	node *new_node = (node*)malloc(sizeof(node));
	new_node->data = data;
	
	if(*head == NULL){
		new_node->next = (*head);
		(*head) = new_node;
		return;}
		
	node* temp = (*head);
	
	while(temp->next)
		temp = temp->next;

	new_node->next = temp->next;
	temp->next = new_node;
}
void print_list(node** head)
{
	node* temp = (*head);
	while(temp)
	{
		printf("Data is %d\t",temp->data);
		temp = temp->next;
		}
		printf("\n\n");

	}

void rev_list(node** head)
{
    node* prev   = NULL;
    node* current = *head;
    node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head = prev;
}

void insert_sorted(node **head,int val){
	node *temp= (node*)malloc(sizeof(node*));
	temp->data = val;
	
	if(*(head) == NULL){
		temp->next = (*head);
		(*head) = temp;
		return;
		}
	node *next = (*head);
	node *curr = NULL;
	printf("next->data is %d\n",next->data);
	printf("Outside the loop\n");
	
	while((next->data) < val){
		printf("Inside the loop\n");
		curr = next;
		next = next->next;
		}
	
	temp->next = curr->next;
	curr->next = temp;
		
	}

void pop_node(node **head)
{
	node* temp = (*head);
	*head = (*head)->next;
	free(temp);
}

void remove_node_from_end(node **head)
{
	node* temp = (*head);
	node* prev = NULL;
	
	while(temp->next){
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);
}

int main()
{
	node* head = NULL;
push_node(&head,1);
append_node(&head,2);
append_node(&head,3);
append_node(&head,6);
push_node(&head,19);
append_node(&head,12);
append_node(&head,23);
push_node(&head,13);
print_list(&head);
pop_node(&head);
print_list(&head);
pop_node(&head);
print_list(&head);
remove_node_from_end(&head);
print_list(&head);
/*append_node(&head,5);
append_node(&head,15);
push_node(&head,4);
append_node(&head,25);
print_list(&head);
rev_list(&head);*/
//insert_sorted(&head,5);
//print_list(&head);


}
