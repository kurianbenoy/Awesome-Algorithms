/* Common Pitfalls:

1. Traverse List till the end
2. Detect only full loop(from first to end)
3. Mark unseen and seen

Approach 1: Use hashing
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
   };


void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = new Node; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 

int detectLoop(struct Node* h)
{
    unordered_set<Node*> s;
    while(h!= NULL)
    {
        if(s.find(h) != s.end())
            return 1;

        s.insert(h);
        h = h->next;
    }
    return 0;
}

/*Floyd’s Cycle-Finding Algorithm: This is the fastest method and has been described below:

    Traverse linked list using two pointers. 
    Move one pointer(slow_p) by one and another pointer(fast_p) by two. 
    If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop
*/

int detectFloydloop(struct Node *head)
{
Node *slow_p = head, *fast_p = head;

    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            //cout << "Found Loop";
            return 1;
        }
    }
    return 0;

}

int main()
{
    Node* head = NULL; 
  
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10); 
  
    /* Create a loop for testing */
    head->next->next->next->next = head; 
    if(detectLoop(head)){
    cout << "Loop found";
    }
    else
        cout << "No Loop";
    if(detectFloydloop(head))
    cout << "Loop found";
    else
        cout << "No Loop";
    return 0; 
} 
