#include<stdio.h>


typedef struct Node{
    int val;
    Node *next;
} Node;
 
void removeNodes(Node* &amp;head, int rmv)
{
    while (head!=NULL &amp;&amp; head-&gt;val==rmv)
    {
        Node *temp=head;
        head=head-&gt;next;
        free(temp);
    }
    if (head==NULL)
        return;
 
    Node *current=head;
    while (current-&gt;next!=NULL)
    {
        if (current-&gt;next-&gt;val==rmv)
        {
            Node *temp=current-&gt;next;
            current-&gt;next=temp-&gt;next;
            free(temp);
        }
        else
        {
            current=current-&gt;next;
        }
    }
}
