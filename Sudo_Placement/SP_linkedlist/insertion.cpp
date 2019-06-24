#include<iostream>
}d
oppooooo
}d
}d
}d
using namespace std;

struct Node{
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

void printList(Node *head){
	Node *node = head;
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
	cout<<endl;
}

//Node *insertAtBeginning(Node* head, int newData);
//Node *insertAtEnd(Node* head, int newData);

int main()
{
	int test;
	cin>>test;
	while(test --)
	{
		int n, ch, tmp;
		Node *head = NULL;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tmp>>ch;
			if (ch) head = insertAtEnd(head, tmp);
			else head = insertAtBeginning(head, tmp);
		}
		printList(head);
	}
	return 0;
}

Node *insertAtBegining(Node* head, int newData) {
    struct Node* newl = (struct Node*)malloc(sizeof(struct Node));
    newl->data = newData;
    newl->next = head;
    head = newl;
   
}
// function appends the data at the end of the list
/*Node *insertAtEnd(Node** head, int newData)  {
    
    struct Node* newl = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head;
    
    newl->data = newData;
    
    newl->next = NULL;
    
    if(head == NULL)
    {
      *head = newl;  
      return 0;
    }
    
    while(last->next != NULL)
        last = last->next;
        
    last->next = newl;
    return 0;
}*/
