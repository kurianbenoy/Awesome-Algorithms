#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};



struct LinkedList{
	Node* head;
	LinkedList()
	{
		head = NULL;
	}

	void reverse()
	{
		Node* current = head;
		Node  *prev = NULL, *next = NULL;

		while(current != NULL){
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
			}
			head = prev;
		}

	void push(int data)
	{
		Node *temp = new Node(data);
		temp->next = head;
		head = temp;
		}
	
	void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

	};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		LinkedList ll;
		cin>>n;

		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			ll.push(t);
		}
		ll.print();
		ll.reverse();
		cout<<endl;
	}
	return 0;
}

