#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;
	};

void middle(struct node *head)
{
	struct node *f = head;
	struct node *s = head;

	if(head != NULL)
	{
		while(f != NULL && f->next != NULL)
		{
			f = f->next->next;
			s = s->next;
		}
		cout<<s->data;
	}
}

void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = new node;

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}


int main()
{
	struct node *head = NULL, *newptr;
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		push(&head, t);
	}
	middle(head);

	return 0;
}
